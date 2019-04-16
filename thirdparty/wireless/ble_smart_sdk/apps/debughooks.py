"""
This function is called when the target is reset. The address 
where the reset went to is 'reset_address'.
"""

def on_reset(api,resetAdr):
	api.Write32(0x4000F040,0x00)			# Trigger cold boot
	api.Write32(0x4000F044,0x12345678)		# Trigger cold boot
	api.Write32(0x4000B004,0xFFFFFFF1)		# Set SPI flash reset
	lpmcu = api.Read32(0x4000B018)			# Get lpmcu register
	lpmcu = ((lpmcu & ~(3<<12)) | 2<<12)	# Set SPI flash clock to 13MHz 
	api.Write32(0x4000B018,lpmcu)			# Write lpmcu back
	api.Write32(0x4000B004,0xFFFFFFFD)		# Clear SPI flash reset
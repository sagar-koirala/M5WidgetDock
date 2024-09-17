import bluetooth

target_name = "Widget Dock"
target_address = None

nearby_devices = bluetooth.discover_devices(lookup_names=True,lookup_class=True)
print(nearby_devices)
for btaddr, btname, btclass in nearby_devices:
    if target_name == btname:
        target_address = btaddr
        break

if target_address is not None:
    print("found target {} bluetooth device with address {} ".format(target_name,target_address))
else:
    print("could not find target bluetooth device nearby")
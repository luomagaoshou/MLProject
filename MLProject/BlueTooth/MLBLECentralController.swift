//
//  MLBLECentralController.swift
//  MLProject
//
//  Created by 妙龙赖 on 16/6/11.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

import UIKit
import CoreBluetooth
class MLBLECentralController: UIViewController, CBCentralManagerDelegate, CBPeripheralDelegate {

    
    var centralManager:CBCentralManager!
    var peripheral:CBPeripheral!
    var characteriestic :CBCharacteristic!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.setupCentralManager()
        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func setupCentralManager() -> Void {
        self.centralManager = CBCentralManager()
        self.centralManager.delegate = self

      
        
    }
    func centralManagerDidUpdateState(central: CBCentralManager) {
        switch central.state {
        case CBCentralManagerState.PoweredOn:
                   NSLog("power on")
              self.centralManager.scanForPeripheralsWithServices(nil, options: nil)
        case CBCentralManagerState.PoweredOff:
                     NSLog("power off")
        default: break
            
        }
    }
    func centralManager(central: CBCentralManager, didConnectPeripheral peripheral: CBPeripheral) {
        NSLog("didConnectPeripheral")
       self.peripheral.discoverServices(nil)
    }
    func centralManager(central: CBCentralManager, willRestoreState dict: [String : AnyObject]) {
        print("willRestoreState")
    }
    func centralManager(central: CBCentralManager, didDisconnectPeripheral peripheral: CBPeripheral, error: NSError?) {
                print("didDisconnectPeripheral")
    }
    func centralManager(central: CBCentralManager, didFailToConnectPeripheral peripheral: CBPeripheral, error: NSError?) {
                        print("didFailToConnectPeripheral")
    }
    func centralManager(central: CBCentralManager, didDiscoverPeripheral peripheral: CBPeripheral, advertisementData: [String : AnyObject], RSSI: NSNumber) {
        central.stopScan()
        self.peripheral = peripheral
        self.peripheral?.delegate = self
        central.connectPeripheral(peripheral, options: nil)
    }
    
    
    
    
    
    //peripheral
    func peripheralDidUpdateName(peripheral: CBPeripheral) {
        
    }
    
    func peripheralDidUpdateRSSI(peripheral: CBPeripheral, error: NSError?) {
        
    }     
    func peripheral(peripheral: CBPeripheral, didDiscoverServices error: NSError?) {
//        let services = peripheral.services
//        for service  in services! {
//            print(service.UUID)
//            peripheral.discoverCharacteristics(nil, forService: service)
//        }
        
        let service = peripheral.services?.last
        peripheral.discoverCharacteristics(nil, forService: service!)
        
    }
    func peripheral(peripheral: CBPeripheral, didModifyServices invalidatedServices: [CBService]) {
        
    }
    func peripheral(peripheral: CBPeripheral, didReadRSSI RSSI: NSNumber, error: NSError?) {
        
    }
    func peripheral(peripheral: CBPeripheral, didWriteValueForDescriptor descriptor: CBDescriptor, error: NSError?) {
        
    }
    func peripheral(peripheral: CBPeripheral, didUpdateValueForDescriptor descriptor: CBDescriptor, error: NSError?) {
        
    }
    func peripheral(peripheral: CBPeripheral, didDiscoverCharacteristicsForService service: CBService, error: NSError?) {
        print(service.characteristics)
        self.characteriestic = service.characteristics?.first!
        peripheral.delegate = self
        peripheral.setNotifyValue(true, forCharacteristic:self.characteriestic)
          peripheral.writeValue("hahagagag".dataUsingEncoding(NSUTF8StringEncoding)!, forCharacteristic: self.characteriestic, type: CBCharacteristicWriteType.WithResponse)
        
        
    }
    func peripheral(peripheral: CBPeripheral, didDiscoverIncludedServicesForService service: CBService, error: NSError?) {
        
    }
    func peripheral(peripheral: CBPeripheral, didWriteValueForCharacteristic characteristic: CBCharacteristic, error: NSError?) {
        
    }
    func peripheral(peripheral: CBPeripheral, didUpdateValueForCharacteristic characteristic: CBCharacteristic, error: NSError?) {
        print(NSString.init(data: (characteristic.value)!, encoding: NSUTF8StringEncoding))
    }
    func peripheral(peripheral: CBPeripheral, didDiscoverDescriptorsForCharacteristic characteristic: CBCharacteristic, error: NSError?) {
        
    }
    func peripheral(peripheral: CBPeripheral, didUpdateNotificationStateForCharacteristic characteristic: CBCharacteristic, error: NSError?) {
        
//        peripheral.readValueForCharacteristic(characteriestic)
//        print(NSString.init(data: (characteristic.value)!, encoding: NSUTF8StringEncoding))
    }
    
    
//    //peripheralManager
//    func peripheralManagerDidUpdateState(peripheral: CBPeripheralManager) {
//        
//    }
//    func peripheralManagerIsReadyToUpdateSubscribers(peripheral: CBPeripheralManager) {
//        
//    }
//    func peripheralManagerDidStartAdvertising(peripheral: CBPeripheralManager, error: NSError?) {
//        
//    }
//    func peripheralManager(peripheral: CBPeripheralManager, didReceiveReadRequest request: CBATTRequest) {
//        
//    }
//    func peripheralManager(peripheral: CBPeripheralManager, willRestoreState dict: [String : AnyObject]) {
//        
//    }
//    func peripheralManager(peripheral: CBPeripheralManager, didReceiveWriteRequests requests: [CBATTRequest]) {
//        
//    }
//    func peripheralManager(peripheral: CBPeripheralManager, didAddService service: CBService, error: NSError?) {
//        
//    }
//    func peripheralManager(peripheral: CBPeripheralManager, central: CBCentral, didSubscribeToCharacteristic characteristic: CBCharacteristic) {
//        
//    }
//    func peripheralManager(peripheral: CBPeripheralManager, central: CBCentral, didUnsubscribeFromCharacteristic characteristic: CBCharacteristic) {
//        
//    }
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}

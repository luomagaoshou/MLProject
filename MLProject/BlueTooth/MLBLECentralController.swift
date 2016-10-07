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
    func centralManagerDidUpdateState(_ central: CBCentralManager) {
        switch central.state {
        case .poweredOn:
                   NSLog("power on")
              self.centralManager.scanForPeripherals(withServices: nil, options: nil)
        case .poweredOff:
                     NSLog("power off")
        default: break
            
        }
    }
    func centralManager(_ central: CBCentralManager, didConnect peripheral: CBPeripheral) {
        NSLog("didConnectPeripheral")
       self.peripheral.discoverServices(nil)
    }
    func centralManager(_ central: CBCentralManager, willRestoreState dict: [String : Any]) {
        print("willRestoreState")
    }
    func centralManager(_ central: CBCentralManager, didDisconnectPeripheral peripheral: CBPeripheral, error: Error?) {
                print("didDisconnectPeripheral")
    }
    func centralManager(_ central: CBCentralManager, didFailToConnect peripheral: CBPeripheral, error: Error?) {
                        print("didFailToConnectPeripheral")
    }
    func centralManager(_ central: CBCentralManager, didDiscover peripheral: CBPeripheral, advertisementData: [String : Any], rssi RSSI: NSNumber) {
        central.stopScan()
        self.peripheral = peripheral
        self.peripheral?.delegate = self
        central.connect(peripheral, options: nil)
    }
    
    
    
    
    
    //peripheral
    func peripheralDidUpdateName(_ peripheral: CBPeripheral) {
        
    }
    
    func peripheralDidUpdateRSSI(_ peripheral: CBPeripheral, error: Error?) {
        
    }     
    func peripheral(_ peripheral: CBPeripheral, didDiscoverServices error: Error?) {
//        let services = peripheral.services
//        for service  in services! {
//            print(service.UUID)
//            peripheral.discoverCharacteristics(nil, forService: service)
//        }
        
        let service = peripheral.services?.last
        peripheral.discoverCharacteristics(nil, for: service!)
        
    }
    func peripheral(_ peripheral: CBPeripheral, didModifyServices invalidatedServices: [CBService]) {
        
    }
    func peripheral(_ peripheral: CBPeripheral, didReadRSSI RSSI: NSNumber, error: Error?) {
        
    }
    func peripheral(_ peripheral: CBPeripheral, didWriteValueFor descriptor: CBDescriptor, error: Error?) {
        
    }
    func peripheral(_ peripheral: CBPeripheral, didUpdateValueFor descriptor: CBDescriptor, error: Error?) {
        
    }
    func peripheral(_ peripheral: CBPeripheral, didDiscoverCharacteristicsFor service: CBService, error: Error?) {
        print(service.characteristics)
        self.characteriestic = service.characteristics?.first!
        peripheral.delegate = self
        peripheral.setNotifyValue(true, for:self.characteriestic)
          peripheral.writeValue("hahagagag".data(using: String.Encoding.utf8)!, for: self.characteriestic, type: CBCharacteristicWriteType.withResponse)
        
        
    }
    func peripheral(_ peripheral: CBPeripheral, didDiscoverIncludedServicesFor service: CBService, error: Error?) {
        
    }
    func peripheral(_ peripheral: CBPeripheral, didWriteValueFor characteristic: CBCharacteristic, error: Error?) {
        
    }
    func peripheral(_ peripheral: CBPeripheral, didUpdateValueFor characteristic: CBCharacteristic, error: Error?) {
        print(NSString.init(data: (characteristic.value)!, encoding: String.Encoding.utf8.rawValue))
    }
    func peripheral(_ peripheral: CBPeripheral, didDiscoverDescriptorsFor characteristic: CBCharacteristic, error: Error?) {
        
    }
    func peripheral(_ peripheral: CBPeripheral, didUpdateNotificationStateFor characteristic: CBCharacteristic, error: Error?) {
        
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

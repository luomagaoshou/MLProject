//
//  MLSwiftController.swift
//  MLProject
//
//  Created by apple on 16/5/19.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

import Foundation
import UIKit

class MLSwiftController: UIViewController {
    @IBOutlet weak var pushNowButton: UIButton!
    @IBOutlet weak var createThenPushButton: UIButton!
    private var name:String!
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        
        
        //错误捕捉
        let guardString = try? MLSwift.guardTest("dd")
        
       let guardString2: String?

        do{
             guardString2 =  try MLSwift.guardTest("ddjjkddd")
            
        }catch ErrorMLTestType.notEnoughLong{
            print("notEnough")
        }
        catch ErrorMLTestType.tooLong{
              print("tooLong")
        }
        catch{
           
        }
        defer{
            
        }
        
        
        
        var array = ["hello", "world", "haha"]
  
//        array.append(1)
        var anotherArray = array.flatMap { (string:String) -> String? in
            if string.characters.count < 5
            {
                  return nil
            }
            return string
           
          
        }
  
        
        anotherArray = array.map({"\($0)?" + $0})
        anotherArray = array.filter({$0.characters.count > 4})
      
      

      var boolValue =  MLSwift.valueTest(true)
        print("value is \(boolValue)")

        var enumValue = MLSwift.enumTest(MLSwiftEnum.third)
        print("enum is \(enumValue)")
        self.name = MLSwift.classTest("haha");
        
        var  mixEnumValue = MLSwiftMixEnum.firstParam(30, 30)
        mixEnumValue = .secondParam("广东", "深圳")
        
        print("mixEnumValue \(mixEnumValue)")
        print(self.name)
        
        
                self.pushNowButton.touchUpInside {
                    var swiftVar = MLSwift.init() as MLSwift
                   
                    swiftVar.setClosureMothod("haha", closureImp: { (str) -> String in
                        return str + str
                    })
                    print(swiftVar.closureMethod!(str:"gaga"))
                    
                    swiftVar.setClosureMothod("pipi", closureImp: { str in
                        str + str
                    })
                    print(swiftVar.closureMethod!(str:"hihi"))
                    
                    swiftVar.setClosureMothod("gege", closureImp: {
                      return $0 + $0
                    })
                    
                    print(swiftVar.closureMethod!(str:"hehe"))
                    swiftVar.closureMethod = { (str) -> String in
                        return str + str
                    }
                    print(swiftVar.closureMethod!(str:"koko"))
                    
                    
                 
                    
        }
            
        self.createThenPushButton.touchUpInside {
            let ctl = UIStoryboard.loadViewControllerWithNibName("MLCLanguage", storyboardID: "MLCLPointerController") as? UIViewController
           self.navigationController?.pushViewController(ctl!, animated: true)
            
        }
      
        
        MLSwift.swiftDic("gege","dede")
        
    }

 
}
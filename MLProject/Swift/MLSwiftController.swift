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
    @IBOutlet weak var pushNow: UIButton!
    @IBOutlet weak var createThenPush: UIButton!
    private var name:String!
    
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
   
        self.name = MLSwift.classTest("haha");
        print(self.name)
        
                pushNow.touchUpInside {
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
                    
                    
        }
        createThenPush.touchUpInside { 
            let ctl = UIStoryboard.loadViewControllerWithNibName("MLCLanguage", storyboardID: "MLCLPointerController") as? UIViewController
           self.navigationController?.pushViewController(ctl!, animated: true)
            
        }
        
        MLSwift.swiftDic("gege","dede")
    }
}
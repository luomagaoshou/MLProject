//
//  MLSwift.swift
//  MLProject
//
//  Created by apple on 16/5/18.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

import Foundation
import UIKit
enum MLSwiftEnum : Int{
    case first = 1
    case second
    case third
}
enum MLSwiftMixEnum {
    case firstParam(Int, Int)
    case secondParam(String, String)
}
enum ErrorMLTestType:ErrorType {
    case notEnoughLong
    case tooLong
}
typealias sendClosure = (str:String) -> String
class class1: NSObject {
    func fuck() -> Void {
        print("fuck")
    }
}


class MLSwift: NSObject {
    
     var closureMethod:((str:String) -> String)?
    var closureMothod2:((str:String)->sendClosure)?
    
    
    
   static func instanceTest(str:String)->String
    {
        return str + str
    }
    class func classTest(str:String)->String
    {
        return str + str + str
    }
    class func swiftDic(strs:String...)->Dictionary<String, String>
    {
    
        
        var dic = ["haha":"gaga", "papa":"lala"]
        
        dic[strs[0]] = strs[1]
        dic.updateValue(strs[0], forKey: strs[1])
    
        
        return dic;
        
    }
    
    func someFunctionThatTakesAClosure(closure: () -> ()) {
        // 函数体部分
    }

    static let numberFormatter: NSNumberFormatter = {
        let formatter = NSNumberFormatter()
        formatter.numberStyle = .DecimalStyle
        return formatter
    }()

    var closureTest2:String = {
        return "fuck"
    }()
    
    func Say(num:Int) -> Bool {
        return num > 10
    }
  
    
    
    
    func setClosureMothod(firstString:String, closureImp:(str:String) -> String) {
        self.closureMethod = closureImp
        
    }
    
   class func valueTest(num:NSNumber = false) -> Bool {
        if Bool(num) {
            return true
        }else
        {
            return false
        }
    }
    class func enumTest(enumValue:MLSwiftEnum = MLSwiftEnum.second)->MLSwiftEnum{
        
        return enumValue;
    }
    class func guardTest(string:String) throws-> String? {
        let resultString = string + string
        guard resultString.characters.count > 5 else{
            throw ErrorMLTestType.notEnoughLong
        }
        guard resultString.characters.count < 15 else{
            throw ErrorMLTestType.tooLong
        }
        
        return resultString
        
    }
//    func arrayTest(obj1:AnyObject) -> Array {
//        
//    }
}

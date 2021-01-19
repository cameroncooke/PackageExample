//
//  ViewController.swift
//  test
//
//  Created by Cameron Cooke on 19/01/2021.
//

import UIKit
import TestPackage

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        let objc = TestClass()
        SomeObject().setObject(objc)
    }


}


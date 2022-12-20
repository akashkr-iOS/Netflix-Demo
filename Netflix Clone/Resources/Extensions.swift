//
//  Extensions.swift
//  Netflix Clone
//
//  Created by akash on 15/12/22.
//

import Foundation


extension String {
    func capitalizeFirstLetter() -> String {
        return self.prefix(1).uppercased() + self.lowercased().dropFirst()
    }
}

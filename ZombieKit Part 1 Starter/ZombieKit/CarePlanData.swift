//
//  CarePlanData.swift
//  ZombieKit
//
//  Created by CCM2308 CCM2308 on 27/02/2018.
//  Copyright © 2018 Razeware. All rights reserved.
//

import CareKit

//Unique identifiers for intervention and assessment activities
enum ActivityIdentifier: String {
    case cardio
    case limberUp = "Limber Up"
    case targetPractice = "Target Practice"
    case pulse
    case temperature
}

class CarePlanData: NSObject {
    /*
     This class will be defining activities
     and adding them to the data store
     */
    
    let carePlanStore: OCKCarePlanStore
    
    class func dailyScheduleRepeating(occurencesPerDay: UInt) -> OCKCareSchedule {
        return OCKCareSchedule.dailySchedule(withStartDate: DateComponents.firstDateOfCurrentWeek,
                                             occurrencesPerDay: occurencesPerDay)
    }
    
    init(carePlanStore: OCKCarePlanStore) {
        self.carePlanStore = carePlanStore
        
        //TODO: Define intervention activities
        
        //TODO: Define assessment activities
        
        super.init()
        
        //TODO: Add activities to store
    }
}

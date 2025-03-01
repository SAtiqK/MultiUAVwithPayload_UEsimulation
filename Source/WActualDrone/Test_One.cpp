// 2018-2021 Kyr Dunenkoff


#include "Test_One.h"
#include <D:\WActualDrone\Plugins\ROSIntegration-master\Source\ROSIntegration\Classes\RI/Topic.h>
#include <D:\WActualDrone\Plugins\ROSIntegration-master\Source\ROSIntegration/Classes/ROSIntegrationGameInstance.h>
#include "ROSIntegration/Public/std_msgs/String.h"

// Sets default values
ATest_One::ATest_One()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATest_One::BeginPlay()
{
//#include <D:\WActualDrone\Plugins\ROSIntegration-master\Source\ROSIntegration\Classes\RI/Topic.h>
//#include <D:\WActualDrone\Plugins\ROSIntegration-master\Source\ROSIntegration/Classes/ROSIntegrationGameInstance.h>
//#include "ROSIntegration/Public/std_msgs/String.h"
//	// Initialize a topic
//	UTopic *ExampleTopic = NewObject<UTopic>(UTopic::StaticClass());
//	UROSIntegrationGameInstance* rosinst = Cast<UROSIntegrationGameInstance>(GetGameInstance());
//	ExampleTopic->Init(rosinst->ROSIntegrationCore, TEXT("/example_topic"), TEXT("std_msgs/String"));
//
//	// (Optional) Advertise the topic
//	ExampleTopic->Advertise();
//
//	// Publish a string to the topic
//	TSharedPtr<ROSMessages::std_msgs::String> StringMessage(new ROSMessages::std_msgs::String("This is an example"));
//	ExampleTopic->Publish(StringMessage);
//
//#include "ROSIntegration/Classes/RI/Topic.h"
//#include "ROSIntegration/Classes/ROSIntegrationGameInstance.h"
//#include "ROSIntegration/Public/std_msgs/String.h"
//
//	// Initialize a topic
//	UTopic *ExampleTopic = NewObject<UTopic>(UTopic::StaticClass());
//	UROSIntegrationGameInstance* rosinst = Cast<UROSIntegrationGameInstance>(GetGameInstance());
//	ExampleTopic->Init(rosinst->ROSIntegrationCore, TEXT("/example_topic"), TEXT("std_msgs/String"));
//
//	// Create a std::function callback object
//	std::function<void(TSharedPtr<FROSBaseMsg>)> SubscribeCallback = [](TSharedPtr<FROSBaseMsg> msg) -> void
//	{
//		auto Concrete = StaticCastSharedPtr<ROSMessages::std_msgs::String>(msg);
//		if (Concrete.IsValid())
//		{
//			UE_LOG(LogTemp, Log, TEXT("Incoming string was: %s"), (*(Concrete->_Data)));
//		}
//		return;
//	};

	// Subscribe to the topic
	//ExampleTopic->Subscribe(SubscribeCallback);
	Super::BeginPlay();
	
}

// Called every frame
void ATest_One::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


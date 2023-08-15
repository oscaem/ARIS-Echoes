// Author: Lucas Vilas-Boas
// Year: 2023
// Repo: https://github.com/lucoiso/UEAzSpeech

#include "AzSpeech/Tasks/SSMLToSpeechAsync.h"

#ifdef UE_INLINE_GENERATED_CPP_BY_NAME
#include UE_INLINE_GENERATED_CPP_BY_NAME(SSMLToSpeechAsync)
#endif

USSMLToSpeechAsync* USSMLToSpeechAsync::SSMLToSpeech_DefaultOptions(UObject* WorldContextObject, const FString& SynthesisSSML)
{
	return SSMLToSpeech_CustomOptions(WorldContextObject, FAzSpeechSubscriptionOptions(), FAzSpeechSynthesisOptions(), SynthesisSSML);
}

USSMLToSpeechAsync* USSMLToSpeechAsync::SSMLToSpeech_CustomOptions(UObject* WorldContextObject, const FAzSpeechSubscriptionOptions SubscriptionOptions, const FAzSpeechSynthesisOptions SynthesisOptions, const FString& SynthesisSSML)
{
	USSMLToSpeechAsync* const NewAsyncTask = NewObject<USSMLToSpeechAsync>();
	NewAsyncTask->WorldContextObject = WorldContextObject;
	NewAsyncTask->SubscriptionOptions = SubscriptionOptions;
	NewAsyncTask->SynthesisOptions = SynthesisOptions;
	NewAsyncTask->SynthesisText = SynthesisSSML;
	NewAsyncTask->bIsSSMLBased = true;
	NewAsyncTask->TaskName = *FString(__func__);

	NewAsyncTask->RegisterWithGameInstance(WorldContextObject);

	return NewAsyncTask;
}
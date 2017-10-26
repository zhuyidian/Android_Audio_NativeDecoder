/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mediatek_factorymode_NativeMP3Decoder */

#ifndef _Included_com_mediatek_factorymode_NativeMP3Decoder
#define _Included_com_mediatek_factorymode_NativeMP3Decoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mediatek_factorymode_NativeMP3Decoder
 * Method:    initAudioPlayer
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_factorymode_NativeMP3Decoder_initAudioPlayer
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_mediatek_factorymode_NativeMP3Decoder
 * Method:    getAudioBuf
 * Signature: ([SI)I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_factorymode_NativeMP3Decoder_getAudioBuf
  (JNIEnv *, jobject, jshortArray, jint);

/*
 * Class:     com_mediatek_factorymode_NativeMP3Decoder
 * Method:    closeAduioFile
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mediatek_factorymode_NativeMP3Decoder_closeAduioFile
  (JNIEnv *, jobject);

/*
 * Class:     com_mediatek_factorymode_NativeMP3Decoder
 * Method:    getAudioSamplerate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_mediatek_factorymode_NativeMP3Decoder_getAudioSamplerate
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
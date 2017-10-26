#define TAG "native_libmad"


#include "FileSystem.h"
#include <stdlib.h>
#include <jni.h>
#include <android/log.h>




 extern int NativeMP3Decoder_readSamples( short *target, int size);

 extern void  NativeMP3Decoder_closeAduioFile();

 extern int NativeMP3Decoder_getAduioSamplerate();

 extern int NativeMP3Decoder_init(char * filepath,unsigned long start);


 jint Java_com_example_testrrumpet_NativeMP3Decoder_initAudioPlayer(JNIEnv *env, jobject obj, jstring file,jint startAddr)
{

    char* fileString = (*env)->GetStringUTFChars(env,file, NULL);

    return  NativeMP3Decoder_init(fileString,startAddr);

}

 jint Java_com_example_testrrumpet_NativeMP3Decoder_getAudioBuf(JNIEnv *env, jobject obj ,jshortArray audioBuf,jint len)
{
    int bufsize = 0;
    int ret = 0;
    if (audioBuf != NULL) {
        bufsize = (*env)->GetArrayLength(env, audioBuf);
        jshort *_buf = (*env)->GetShortArrayElements(env, audioBuf, 0);
        memset(_buf, 0, bufsize*2);
        ret = NativeMP3Decoder_readSamples(_buf, len);
        (*env)->ReleaseShortArrayElements(env, audioBuf, _buf, 0);
    }
    else{

          //  __android_log_print(ANDROID_LOG_DEBUG, TAG, "getAudio failed");
        }
    return ret;
}

 jint Java_com_example_testrrumpet_NativeMP3Decoder_getAudioSamplerate()
{
    return NativeMP3Decoder_getAduioSamplerate();
}


 void Java_com_example_testrrumpet_NativeMP3Decoder_closeAduioFile( )

{
    NativeMP3Decoder_closeAduioFile();

}

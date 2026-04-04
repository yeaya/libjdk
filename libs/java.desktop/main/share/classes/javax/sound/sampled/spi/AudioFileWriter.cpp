#include <javax/sound/sampled/spi/AudioFileWriter.h>
#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

using $AudioFileFormat$TypeArray = $Array<::javax::sound::sampled::AudioFileFormat$Type>;
using $File = ::java::io::File;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Predicate = ::java::util::function::Predicate;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

class AudioFileWriter$$Lambda$equals : public $Predicate {
	$class(AudioFileWriter$$Lambda$equals, $NO_CLASS_INIT, $Predicate)
public:
	void init$($AudioFileFormat$Type* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* obj) override {
		 return $nc(inst$)->equals(obj);
	}
	$AudioFileFormat$Type* inst$ = nullptr;
};
$Class* AudioFileWriter$$Lambda$equals::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AudioFileWriter$$Lambda$equals, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;)V", nullptr, $PUBLIC, $method(AudioFileWriter$$Lambda$equals, init$, void, $AudioFileFormat$Type*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AudioFileWriter$$Lambda$equals, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.sound.sampled.spi.AudioFileWriter$$Lambda$equals",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AudioFileWriter$$Lambda$equals, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioFileWriter$$Lambda$equals);
	});
	return class$;
}
$Class* AudioFileWriter$$Lambda$equals::class$ = nullptr;

void AudioFileWriter::init$() {
}

bool AudioFileWriter::isFileTypeSupported($AudioFileFormat$Type* fileType) {
	$useLocalObjectStack();
	return $$nc($Arrays::stream($(getAudioFileTypes())))->anyMatch($$new(AudioFileWriter$$Lambda$equals, $nc(fileType)));
}

bool AudioFileWriter::isFileTypeSupported($AudioFileFormat$Type* fileType, $AudioInputStream* stream) {
	$useLocalObjectStack();
	return $$nc($Arrays::stream($(getAudioFileTypes(stream))))->anyMatch($$new(AudioFileWriter$$Lambda$equals, $nc(fileType)));
}

AudioFileWriter::AudioFileWriter() {
}

$Class* AudioFileWriter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.sound.sampled.spi.AudioFileWriter$$Lambda$equals")) {
			return AudioFileWriter$$Lambda$equals::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AudioFileWriter, init$, void)},
		{"getAudioFileTypes", "()[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioFileWriter, getAudioFileTypes, $AudioFileFormat$TypeArray*)},
		{"getAudioFileTypes", "(Ljavax/sound/sampled/AudioInputStream;)[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioFileWriter, getAudioFileTypes, $AudioFileFormat$TypeArray*, $AudioInputStream*)},
		{"isFileTypeSupported", "(Ljavax/sound/sampled/AudioFileFormat$Type;)Z", nullptr, $PUBLIC, $virtualMethod(AudioFileWriter, isFileTypeSupported, bool, $AudioFileFormat$Type*)},
		{"isFileTypeSupported", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioInputStream;)Z", nullptr, $PUBLIC, $virtualMethod(AudioFileWriter, isFileTypeSupported, bool, $AudioFileFormat$Type*, $AudioInputStream*)},
		{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/OutputStream;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioFileWriter, write, int32_t, $AudioInputStream*, $AudioFileFormat$Type*, $OutputStream*), "java.io.IOException"},
		{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/File;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AudioFileWriter, write, int32_t, $AudioInputStream*, $AudioFileFormat$Type*, $File*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.sampled.spi.AudioFileWriter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AudioFileWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AudioFileWriter);
	});
	return class$;
}

$Class* AudioFileWriter::class$ = nullptr;

			} // spi
		} // sampled
	} // sound
} // javax
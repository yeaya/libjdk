#include <javax/sound/midi/spi/MidiFileWriter.h>
#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/stream/IntStream.h>
#include <javax/sound/midi/Sequence.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $IntPredicate = ::java::util::function::IntPredicate;
using $Sequence = ::javax::sound::midi::Sequence;

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

class MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0 : public $IntPredicate {
	$class(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, $NO_CLASS_INIT, $IntPredicate)
public:
	void init$(int32_t fileType) {
		this->fileType = fileType;
	}
	virtual bool test(int32_t type) override {
		 return MidiFileWriter::lambda$isFileTypeSupported$0(fileType, type);
	}
	int32_t fileType = 0;
};
$Class* MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fileType", "I", nullptr, $PUBLIC, $field(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, fileType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, init$, void, int32_t)},
		{"test", "(I)Z", nullptr, $PUBLIC, $virtualMethod(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, test, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.sound.midi.spi.MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0",
		"java.lang.Object",
		"java.util.function.IntPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0);
	});
	return class$;
}
$Class* MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::class$ = nullptr;

void MidiFileWriter::init$() {
}

bool MidiFileWriter::isFileTypeSupported(int32_t fileType) {
	$useLocalObjectStack();
	return $$nc($Arrays::stream($(getMidiFileTypes())))->anyMatch($$new(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, fileType));
}

bool MidiFileWriter::isFileTypeSupported(int32_t fileType, $Sequence* sequence) {
	$useLocalObjectStack();
	return $$nc($Arrays::stream($(getMidiFileTypes(sequence))))->anyMatch($$new(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, fileType));
}

bool MidiFileWriter::lambda$isFileTypeSupported$0(int32_t fileType, int32_t type) {
	return fileType == type;
}

MidiFileWriter::MidiFileWriter() {
}

$Class* MidiFileWriter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.sound.midi.spi.MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0")) {
			return MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(MidiFileWriter, init$, void)},
		{"getMidiFileTypes", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiFileWriter, getMidiFileTypes, $ints*)},
		{"getMidiFileTypes", "(Ljavax/sound/midi/Sequence;)[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiFileWriter, getMidiFileTypes, $ints*, $Sequence*)},
		{"isFileTypeSupported", "(I)Z", nullptr, $PUBLIC, $virtualMethod(MidiFileWriter, isFileTypeSupported, bool, int32_t)},
		{"isFileTypeSupported", "(ILjavax/sound/midi/Sequence;)Z", nullptr, $PUBLIC, $virtualMethod(MidiFileWriter, isFileTypeSupported, bool, int32_t, $Sequence*)},
		{"lambda$isFileTypeSupported$0", "(II)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MidiFileWriter, lambda$isFileTypeSupported$0, bool, int32_t, int32_t)},
		{"write", "(Ljavax/sound/midi/Sequence;ILjava/io/OutputStream;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiFileWriter, write, int32_t, $Sequence*, int32_t, $OutputStream*), "java.io.IOException"},
		{"write", "(Ljavax/sound/midi/Sequence;ILjava/io/File;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiFileWriter, write, int32_t, $Sequence*, int32_t, $File*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.midi.spi.MidiFileWriter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MidiFileWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiFileWriter);
	});
	return class$;
}

$Class* MidiFileWriter::class$ = nullptr;

			} // spi
		} // midi
	} // sound
} // javax
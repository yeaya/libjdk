#include <javax/sound/sampled/spi/FormatConversionProvider.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

using $AudioFormat$EncodingArray = $Array<::javax::sound::sampled::AudioFormat$Encoding>;
using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Predicate = ::java::util::function::Predicate;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

class FormatConversionProvider$$Lambda$equals : public $Predicate {
	$class(FormatConversionProvider$$Lambda$equals, $NO_CLASS_INIT, $Predicate)
public:
	void init$($AudioFormat$Encoding* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* obj) override {
		 return $nc(inst$)->equals(obj);
	}
	$AudioFormat$Encoding* inst$ = nullptr;
};
$Class* FormatConversionProvider$$Lambda$equals::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(FormatConversionProvider$$Lambda$equals, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/AudioFormat$Encoding;)V", nullptr, $PUBLIC, $method(FormatConversionProvider$$Lambda$equals, init$, void, $AudioFormat$Encoding*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FormatConversionProvider$$Lambda$equals, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.sound.sampled.spi.FormatConversionProvider$$Lambda$equals",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FormatConversionProvider$$Lambda$equals, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatConversionProvider$$Lambda$equals);
	});
	return class$;
}
$Class* FormatConversionProvider$$Lambda$equals::class$ = nullptr;

class FormatConversionProvider$$Lambda$matches$1 : public $Predicate {
	$class(FormatConversionProvider$$Lambda$matches$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($AudioFormat* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* format) override {
		 return $nc(inst$)->matches($cast($AudioFormat, format));
	}
	$AudioFormat* inst$ = nullptr;
};
$Class* FormatConversionProvider$$Lambda$matches$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(FormatConversionProvider$$Lambda$matches$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC, $method(FormatConversionProvider$$Lambda$matches$1, init$, void, $AudioFormat*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FormatConversionProvider$$Lambda$matches$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.sound.sampled.spi.FormatConversionProvider$$Lambda$matches$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FormatConversionProvider$$Lambda$matches$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatConversionProvider$$Lambda$matches$1);
	});
	return class$;
}
$Class* FormatConversionProvider$$Lambda$matches$1::class$ = nullptr;

void FormatConversionProvider::init$() {
}

bool FormatConversionProvider::isSourceEncodingSupported($AudioFormat$Encoding* sourceEncoding) {
	$useLocalObjectStack();
	return $$nc($Arrays::stream($(getSourceEncodings())))->anyMatch($$new(FormatConversionProvider$$Lambda$equals, $nc(sourceEncoding)));
}

bool FormatConversionProvider::isTargetEncodingSupported($AudioFormat$Encoding* targetEncoding) {
	$useLocalObjectStack();
	return $$nc($Arrays::stream($(getTargetEncodings())))->anyMatch($$new(FormatConversionProvider$$Lambda$equals, $nc(targetEncoding)));
}

bool FormatConversionProvider::isConversionSupported($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$useLocalObjectStack();
	return $$nc($Arrays::stream($(getTargetEncodings(sourceFormat))))->anyMatch($$new(FormatConversionProvider$$Lambda$equals, $nc(targetEncoding)));
}

bool FormatConversionProvider::isConversionSupported($AudioFormat* targetFormat, $AudioFormat* sourceFormat) {
	$useLocalObjectStack();
	$var($AudioFormat$Encoding, targetEncoding, $nc(targetFormat)->getEncoding());
	return $$nc($Arrays::stream($(getTargetFormats(targetEncoding, sourceFormat))))->anyMatch($$new(FormatConversionProvider$$Lambda$matches$1, targetFormat));
}

FormatConversionProvider::FormatConversionProvider() {
}

$Class* FormatConversionProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.sound.sampled.spi.FormatConversionProvider$$Lambda$equals")) {
			return FormatConversionProvider$$Lambda$equals::load$(name, initialize);
		}
		if (name->equals("javax.sound.sampled.spi.FormatConversionProvider$$Lambda$matches$1")) {
			return FormatConversionProvider$$Lambda$matches$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(FormatConversionProvider, init$, void)},
		{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FormatConversionProvider, getAudioInputStream, $AudioInputStream*, $AudioFormat$Encoding*, $AudioInputStream*)},
		{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FormatConversionProvider, getAudioInputStream, $AudioInputStream*, $AudioFormat*, $AudioInputStream*)},
		{"getSourceEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FormatConversionProvider, getSourceEncodings, $AudioFormat$EncodingArray*)},
		{"getTargetEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FormatConversionProvider, getTargetEncodings, $AudioFormat$EncodingArray*)},
		{"getTargetEncodings", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FormatConversionProvider, getTargetEncodings, $AudioFormat$EncodingArray*, $AudioFormat*)},
		{"getTargetFormats", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FormatConversionProvider, getTargetFormats, $AudioFormatArray*, $AudioFormat$Encoding*, $AudioFormat*)},
		{"isConversionSupported", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC, $virtualMethod(FormatConversionProvider, isConversionSupported, bool, $AudioFormat$Encoding*, $AudioFormat*)},
		{"isConversionSupported", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC, $virtualMethod(FormatConversionProvider, isConversionSupported, bool, $AudioFormat*, $AudioFormat*)},
		{"isSourceEncodingSupported", "(Ljavax/sound/sampled/AudioFormat$Encoding;)Z", nullptr, $PUBLIC, $virtualMethod(FormatConversionProvider, isSourceEncodingSupported, bool, $AudioFormat$Encoding*)},
		{"isTargetEncodingSupported", "(Ljavax/sound/sampled/AudioFormat$Encoding;)Z", nullptr, $PUBLIC, $virtualMethod(FormatConversionProvider, isTargetEncodingSupported, bool, $AudioFormat$Encoding*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.sampled.spi.FormatConversionProvider",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatConversionProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatConversionProvider);
	});
	return class$;
}

$Class* FormatConversionProvider::class$ = nullptr;

			} // spi
		} // sampled
	} // sound
} // javax
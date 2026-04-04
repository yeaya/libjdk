#include <sun/awt/AWTCharset$Decoder.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <sun/awt/AWTCharset.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $AWTCharset = ::sun::awt::AWTCharset;

namespace sun {
	namespace awt {

void AWTCharset$Decoder::init$($AWTCharset* this$0) {
	AWTCharset$Decoder::init$(this$0, $($nc(this$0->javaCs)->newDecoder()));
}

void AWTCharset$Decoder::init$($AWTCharset* this$0, $CharsetDecoder* dec) {
	$set(this, this$0, this$0);
	$var($Charset, var$0, this$0->awtCs);
	float var$1 = $nc(dec)->averageCharsPerByte();
	$CharsetDecoder::init$(var$0, var$1, dec->maxCharsPerByte());
	$set(this, fbb, $ByteBuffer::allocate(0));
	$set(this, dec, dec);
}

$CoderResult* AWTCharset$Decoder::decodeLoop($ByteBuffer* src, $CharBuffer* dst) {
	return $nc(this->dec)->decode(src, dst, true);
}

$CoderResult* AWTCharset$Decoder::implFlush($CharBuffer* out) {
	$nc(this->dec)->decode(this->fbb, out, true);
	return this->dec->flush(out);
}

void AWTCharset$Decoder::implReset() {
	$nc(this->dec)->reset();
}

void AWTCharset$Decoder::implReplaceWith($String* newReplacement) {
	if (this->dec != nullptr) {
		this->dec->replaceWith(newReplacement);
	}
}

void AWTCharset$Decoder::implOnMalformedInput($CodingErrorAction* newAction) {
	$nc(this->dec)->onMalformedInput(newAction);
}

void AWTCharset$Decoder::implOnUnmappableCharacter($CodingErrorAction* newAction) {
	$nc(this->dec)->onUnmappableCharacter(newAction);
}

AWTCharset$Decoder::AWTCharset$Decoder() {
}

$Class* AWTCharset$Decoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/awt/AWTCharset;", nullptr, $FINAL | $SYNTHETIC, $field(AWTCharset$Decoder, this$0)},
		{"dec", "Ljava/nio/charset/CharsetDecoder;", nullptr, $PROTECTED, $field(AWTCharset$Decoder, dec)},
		{"nr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AWTCharset$Decoder, nr)},
		{"fbb", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(AWTCharset$Decoder, fbb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/AWTCharset;)V", nullptr, $PROTECTED, $method(AWTCharset$Decoder, init$, void, $AWTCharset*)},
		{"<init>", "(Lsun/awt/AWTCharset;Ljava/nio/charset/CharsetDecoder;)V", nullptr, $PROTECTED, $method(AWTCharset$Decoder, init$, void, $AWTCharset*, $CharsetDecoder*)},
		{"decodeLoop", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Decoder, decodeLoop, $CoderResult*, $ByteBuffer*, $CharBuffer*)},
		{"implFlush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Decoder, implFlush, $CoderResult*, $CharBuffer*)},
		{"implOnMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)V", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Decoder, implOnMalformedInput, void, $CodingErrorAction*)},
		{"implOnUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)V", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Decoder, implOnUnmappableCharacter, void, $CodingErrorAction*)},
		{"implReplaceWith", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Decoder, implReplaceWith, void, $String*)},
		{"implReset", "()V", nullptr, $PROTECTED, $virtualMethod(AWTCharset$Decoder, implReset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTCharset$Decoder", "sun.awt.AWTCharset", "Decoder", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.AWTCharset$Decoder",
		"java.nio.charset.CharsetDecoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AWTCharset"
	};
	$loadClass(AWTCharset$Decoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTCharset$Decoder);
	});
	return class$;
}

$Class* AWTCharset$Decoder::class$ = nullptr;

	} // awt
} // sun
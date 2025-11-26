#include <sun/nio/cs/ext/IBM290.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM290$Holder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM290$Holder = ::sun::nio::cs::ext::IBM290$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM290_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM290::*)()>(&IBM290::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM290_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM290$Holder", "sun.nio.cs.ext.IBM290", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM290_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM290",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM290_MethodInfo_,
	nullptr,
	nullptr,
	_IBM290_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM290$Holder"
};

$Object* allocate$IBM290($Class* clazz) {
	return $of($alloc(IBM290));
}

int32_t IBM290::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM290::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM290::toString() {
	 return this->$Charset::toString();
}

$Object* IBM290::clone() {
	 return this->$Charset::clone();
}

void IBM290::finalize() {
	this->$Charset::finalize();
}

void IBM290::init$() {
	$Charset::init$("IBM290"_s, $($ExtendedCharsets::aliasesFor("IBM290"_s)));
}

$String* IBM290::historicalName() {
	return "Cp290"_s;
}

bool IBM290::contains($Charset* cs) {
	return ($instanceOf(IBM290, cs));
}

$CharsetDecoder* IBM290::newDecoder() {
	$init($IBM290$Holder);
	return $new($SingleByte$Decoder, this, $IBM290$Holder::b2c, false, false);
}

$CharsetEncoder* IBM290::newEncoder() {
	$init($IBM290$Holder);
	return $new($SingleByte$Encoder, this, $IBM290$Holder::c2b, $IBM290$Holder::c2bIndex, false);
}

IBM290::IBM290() {
}

$Class* IBM290::load$($String* name, bool initialize) {
	$loadClass(IBM290, name, initialize, &_IBM290_ClassInfo_, allocate$IBM290);
	return class$;
}

$Class* IBM290::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun
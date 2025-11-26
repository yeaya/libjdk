#include <sun/nio/cs/ext/IBM424.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM424$Holder.h>
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
using $IBM424$Holder = ::sun::nio::cs::ext::IBM424$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM424_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM424::*)()>(&IBM424::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM424_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM424$Holder", "sun.nio.cs.ext.IBM424", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM424_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM424",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM424_MethodInfo_,
	nullptr,
	nullptr,
	_IBM424_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM424$Holder"
};

$Object* allocate$IBM424($Class* clazz) {
	return $of($alloc(IBM424));
}

int32_t IBM424::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM424::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM424::toString() {
	 return this->$Charset::toString();
}

$Object* IBM424::clone() {
	 return this->$Charset::clone();
}

void IBM424::finalize() {
	this->$Charset::finalize();
}

void IBM424::init$() {
	$Charset::init$("IBM424"_s, $($ExtendedCharsets::aliasesFor("IBM424"_s)));
}

$String* IBM424::historicalName() {
	return "Cp424"_s;
}

bool IBM424::contains($Charset* cs) {
	return ($instanceOf(IBM424, cs));
}

$CharsetDecoder* IBM424::newDecoder() {
	$init($IBM424$Holder);
	return $new($SingleByte$Decoder, this, $IBM424$Holder::b2c, false, false);
}

$CharsetEncoder* IBM424::newEncoder() {
	$init($IBM424$Holder);
	return $new($SingleByte$Encoder, this, $IBM424$Holder::c2b, $IBM424$Holder::c2bIndex, false);
}

IBM424::IBM424() {
}

$Class* IBM424::load$($String* name, bool initialize) {
	$loadClass(IBM424, name, initialize, &_IBM424_ClassInfo_, allocate$IBM424);
	return class$;
}

$Class* IBM424::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun
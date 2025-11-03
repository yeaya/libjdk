#include <sun/nio/cs/ext/IBM875.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM875$Holder.h>
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
using $IBM875$Holder = ::sun::nio::cs::ext::IBM875$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM875_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM875::*)()>(&IBM875::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM875_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM875$Holder", "sun.nio.cs.ext.IBM875", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM875_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM875",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM875_MethodInfo_,
	nullptr,
	nullptr,
	_IBM875_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM875$Holder"
};

$Object* allocate$IBM875($Class* clazz) {
	return $of($alloc(IBM875));
}

int32_t IBM875::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM875::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM875::toString() {
	 return this->$Charset::toString();
}

$Object* IBM875::clone() {
	 return this->$Charset::clone();
}

void IBM875::finalize() {
	this->$Charset::finalize();
}

void IBM875::init$() {
	$Charset::init$("x-IBM875"_s, $($ExtendedCharsets::aliasesFor("x-IBM875"_s)));
}

$String* IBM875::historicalName() {
	return "Cp875"_s;
}

bool IBM875::contains($Charset* cs) {
	return ($instanceOf(IBM875, cs));
}

$CharsetDecoder* IBM875::newDecoder() {
	$init($IBM875$Holder);
	return $new($SingleByte$Decoder, this, $IBM875$Holder::b2c, false, false);
}

$CharsetEncoder* IBM875::newEncoder() {
	$init($IBM875$Holder);
	return $new($SingleByte$Encoder, this, $IBM875$Holder::c2b, $IBM875$Holder::c2bIndex, false);
}

IBM875::IBM875() {
}

$Class* IBM875::load$($String* name, bool initialize) {
	$loadClass(IBM875, name, initialize, &_IBM875_ClassInfo_, allocate$IBM875);
	return class$;
}

$Class* IBM875::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun
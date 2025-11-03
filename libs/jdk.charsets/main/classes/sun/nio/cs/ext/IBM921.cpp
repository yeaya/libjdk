#include <sun/nio/cs/ext/IBM921.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM921$Holder.h>
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
using $IBM921$Holder = ::sun::nio::cs::ext::IBM921$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM921_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM921::*)()>(&IBM921::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM921_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM921$Holder", "sun.nio.cs.ext.IBM921", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM921_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM921",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM921_MethodInfo_,
	nullptr,
	nullptr,
	_IBM921_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM921$Holder"
};

$Object* allocate$IBM921($Class* clazz) {
	return $of($alloc(IBM921));
}

int32_t IBM921::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM921::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM921::toString() {
	 return this->$Charset::toString();
}

$Object* IBM921::clone() {
	 return this->$Charset::clone();
}

void IBM921::finalize() {
	this->$Charset::finalize();
}

void IBM921::init$() {
	$Charset::init$("x-IBM921"_s, $($ExtendedCharsets::aliasesFor("x-IBM921"_s)));
}

$String* IBM921::historicalName() {
	return "Cp921"_s;
}

bool IBM921::contains($Charset* cs) {
	return ($instanceOf(IBM921, cs));
}

$CharsetDecoder* IBM921::newDecoder() {
	$init($IBM921$Holder);
	return $new($SingleByte$Decoder, this, $IBM921$Holder::b2c, false, false);
}

$CharsetEncoder* IBM921::newEncoder() {
	$init($IBM921$Holder);
	return $new($SingleByte$Encoder, this, $IBM921$Holder::c2b, $IBM921$Holder::c2bIndex, false);
}

IBM921::IBM921() {
}

$Class* IBM921::load$($String* name, bool initialize) {
	$loadClass(IBM921, name, initialize, &_IBM921_ClassInfo_, allocate$IBM921);
	return class$;
}

$Class* IBM921::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun
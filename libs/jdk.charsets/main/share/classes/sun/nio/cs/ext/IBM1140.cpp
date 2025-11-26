#include <sun/nio/cs/ext/IBM1140.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1140$Holder.h>
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
using $IBM1140$Holder = ::sun::nio::cs::ext::IBM1140$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1140_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1140::*)()>(&IBM1140::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1140_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1140$Holder", "sun.nio.cs.ext.IBM1140", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1140_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1140",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1140_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1140_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1140$Holder"
};

$Object* allocate$IBM1140($Class* clazz) {
	return $of($alloc(IBM1140));
}

int32_t IBM1140::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1140::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1140::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1140::clone() {
	 return this->$Charset::clone();
}

void IBM1140::finalize() {
	this->$Charset::finalize();
}

void IBM1140::init$() {
	$Charset::init$("IBM01140"_s, $($ExtendedCharsets::aliasesFor("IBM01140"_s)));
}

$String* IBM1140::historicalName() {
	return "Cp1140"_s;
}

bool IBM1140::contains($Charset* cs) {
	return ($instanceOf(IBM1140, cs));
}

$CharsetDecoder* IBM1140::newDecoder() {
	$init($IBM1140$Holder);
	return $new($SingleByte$Decoder, this, $IBM1140$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1140::newEncoder() {
	$init($IBM1140$Holder);
	return $new($SingleByte$Encoder, this, $IBM1140$Holder::c2b, $IBM1140$Holder::c2bIndex, false);
}

IBM1140::IBM1140() {
}

$Class* IBM1140::load$($String* name, bool initialize) {
	$loadClass(IBM1140, name, initialize, &_IBM1140_ClassInfo_, allocate$IBM1140);
	return class$;
}

$Class* IBM1140::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun
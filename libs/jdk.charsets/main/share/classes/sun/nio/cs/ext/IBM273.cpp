#include <sun/nio/cs/ext/IBM273.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM273$Holder.h>
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
using $IBM273$Holder = ::sun::nio::cs::ext::IBM273$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM273_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM273::*)()>(&IBM273::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM273_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM273$Holder", "sun.nio.cs.ext.IBM273", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM273_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM273",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM273_MethodInfo_,
	nullptr,
	nullptr,
	_IBM273_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM273$Holder"
};

$Object* allocate$IBM273($Class* clazz) {
	return $of($alloc(IBM273));
}

int32_t IBM273::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM273::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM273::toString() {
	 return this->$Charset::toString();
}

$Object* IBM273::clone() {
	 return this->$Charset::clone();
}

void IBM273::finalize() {
	this->$Charset::finalize();
}

void IBM273::init$() {
	$Charset::init$("IBM273"_s, $($ExtendedCharsets::aliasesFor("IBM273"_s)));
}

$String* IBM273::historicalName() {
	return "Cp273"_s;
}

bool IBM273::contains($Charset* cs) {
	return ($instanceOf(IBM273, cs));
}

$CharsetDecoder* IBM273::newDecoder() {
	$init($IBM273$Holder);
	return $new($SingleByte$Decoder, this, $IBM273$Holder::b2c, false, true);
}

$CharsetEncoder* IBM273::newEncoder() {
	$init($IBM273$Holder);
	return $new($SingleByte$Encoder, this, $IBM273$Holder::c2b, $IBM273$Holder::c2bIndex, false);
}

IBM273::IBM273() {
}

$Class* IBM273::load$($String* name, bool initialize) {
	$loadClass(IBM273, name, initialize, &_IBM273_ClassInfo_, allocate$IBM273);
	return class$;
}

$Class* IBM273::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun
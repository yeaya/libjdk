#include <com/sun/org/apache/xml/internal/serialize/LineSeparator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _LineSeparator_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _LineSeparator_FieldInfo_[] = {
	{"Unix", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineSeparator, Unix)},
	{"Windows", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineSeparator, Windows)},
	{"Macintosh", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineSeparator, Macintosh)},
	{"Web", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineSeparator, Web)},
	{}
};

$MethodInfo _LineSeparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LineSeparator, init$, void)},
	{}
};

$ClassInfo _LineSeparator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.LineSeparator",
	"java.lang.Object",
	nullptr,
	_LineSeparator_FieldInfo_,
	_LineSeparator_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_LineSeparator_Annotations_
};

$Object* allocate$LineSeparator($Class* clazz) {
	return $of($alloc(LineSeparator));
}

$String* LineSeparator::Unix = nullptr;
$String* LineSeparator::Windows = nullptr;
$String* LineSeparator::Macintosh = nullptr;
$String* LineSeparator::Web = nullptr;

void LineSeparator::init$() {
}

LineSeparator::LineSeparator() {
}

void clinit$LineSeparator($Class* class$) {
	$assignStatic(LineSeparator::Unix, "\n"_s);
	$assignStatic(LineSeparator::Windows, "\r\n"_s);
	$assignStatic(LineSeparator::Macintosh, "\r"_s);
	$assignStatic(LineSeparator::Web, "\n"_s);
}

$Class* LineSeparator::load$($String* name, bool initialize) {
	$loadClass(LineSeparator, name, initialize, &_LineSeparator_ClassInfo_, clinit$LineSeparator, allocate$LineSeparator);
	return class$;
}

$Class* LineSeparator::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
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

$String* LineSeparator::Unix = nullptr;
$String* LineSeparator::Windows = nullptr;
$String* LineSeparator::Macintosh = nullptr;
$String* LineSeparator::Web = nullptr;

void LineSeparator::init$() {
}

LineSeparator::LineSeparator() {
}

void LineSeparator::clinit$($Class* clazz) {
	$assignStatic(LineSeparator::Unix, "\n"_s);
	$assignStatic(LineSeparator::Windows, "\r\n"_s);
	$assignStatic(LineSeparator::Macintosh, "\r"_s);
	$assignStatic(LineSeparator::Web, "\n"_s);
}

$Class* LineSeparator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"Unix", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineSeparator, Unix)},
		{"Windows", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineSeparator, Windows)},
		{"Macintosh", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineSeparator, Macintosh)},
		{"Web", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LineSeparator, Web)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LineSeparator, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serialize.LineSeparator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(LineSeparator, name, initialize, &classInfo$$, LineSeparator::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LineSeparator);
	});
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
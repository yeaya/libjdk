#include <com/sun/org/apache/xml/internal/serialize/OutputFormat$Defaults.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$String* OutputFormat$Defaults::Encoding = nullptr;

void OutputFormat$Defaults::init$() {
}

OutputFormat$Defaults::OutputFormat$Defaults() {
}

void OutputFormat$Defaults::clinit$($Class* clazz) {
	$assignStatic(OutputFormat$Defaults::Encoding, "UTF-8"_s);
}

$Class* OutputFormat$Defaults::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"Indent", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OutputFormat$Defaults, Indent)},
		{"Encoding", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputFormat$Defaults, Encoding)},
		{"LineWidth", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OutputFormat$Defaults, LineWidth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OutputFormat$Defaults, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.serialize.OutputFormat$Defaults", "com.sun.org.apache.xml.internal.serialize.OutputFormat", "Defaults", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serialize.OutputFormat$Defaults",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.serialize.OutputFormat"
	};
	$loadClass(OutputFormat$Defaults, name, initialize, &classInfo$$, OutputFormat$Defaults::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OutputFormat$Defaults);
	});
	return class$;
}

$Class* OutputFormat$Defaults::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
#include <com/sun/org/apache/xalan/internal/xsltc/ProcessorVersion.h>
#include <jcpp.h>

#undef DELTA
#undef MAJOR
#undef MINOR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

int32_t ProcessorVersion::MAJOR = 0;
int32_t ProcessorVersion::MINOR = 0;
int32_t ProcessorVersion::DELTA = 0;

void ProcessorVersion::init$() {
}

void ProcessorVersion::main($StringArray* args) {
	$init(ProcessorVersion);
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"XSLTC version "_s, $$str(ProcessorVersion::MAJOR), "."_s, $$str(ProcessorVersion::MINOR), ((ProcessorVersion::DELTA > 0) ? ($$str({"."_s, $$str(ProcessorVersion::DELTA)})) : (""_s))}));
}

void ProcessorVersion::clinit$($Class* clazz) {
	ProcessorVersion::MAJOR = 1;
	ProcessorVersion::MINOR = 0;
	ProcessorVersion::DELTA = 0;
}

ProcessorVersion::ProcessorVersion() {
}

$Class* ProcessorVersion::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MAJOR", "I", nullptr, $PRIVATE | $STATIC, $staticField(ProcessorVersion, MAJOR)},
		{"MINOR", "I", nullptr, $PRIVATE | $STATIC, $staticField(ProcessorVersion, MINOR)},
		{"DELTA", "I", nullptr, $PRIVATE | $STATIC, $staticField(ProcessorVersion, DELTA)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProcessorVersion, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessorVersion, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.ProcessorVersion",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProcessorVersion, name, initialize, &classInfo$$, ProcessorVersion::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessorVersion);
	});
	return class$;
}

$Class* ProcessorVersion::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
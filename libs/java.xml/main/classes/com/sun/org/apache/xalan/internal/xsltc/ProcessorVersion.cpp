#include <com/sun/org/apache/xalan/internal/xsltc/ProcessorVersion.h>

#include <jcpp.h>

#undef DELTA
#undef MAJOR
#undef MINOR

using $PrintStream = ::java::io::PrintStream;
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

$FieldInfo _ProcessorVersion_FieldInfo_[] = {
	{"MAJOR", "I", nullptr, $PRIVATE | $STATIC, $staticField(ProcessorVersion, MAJOR)},
	{"MINOR", "I", nullptr, $PRIVATE | $STATIC, $staticField(ProcessorVersion, MINOR)},
	{"DELTA", "I", nullptr, $PRIVATE | $STATIC, $staticField(ProcessorVersion, DELTA)},
	{}
};

$MethodInfo _ProcessorVersion_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ProcessorVersion, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ProcessorVersion, main, void, $StringArray*)},
	{}
};

$ClassInfo _ProcessorVersion_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.ProcessorVersion",
	"java.lang.Object",
	nullptr,
	_ProcessorVersion_FieldInfo_,
	_ProcessorVersion_MethodInfo_
};

$Object* allocate$ProcessorVersion($Class* clazz) {
	return $of($alloc(ProcessorVersion));
}

int32_t ProcessorVersion::MAJOR = 0;
int32_t ProcessorVersion::MINOR = 0;
int32_t ProcessorVersion::DELTA = 0;

void ProcessorVersion::init$() {
}

void ProcessorVersion::main($StringArray* args) {
	$init(ProcessorVersion);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"XSLTC version "_s, $$str(ProcessorVersion::MAJOR), "."_s, $$str(ProcessorVersion::MINOR), ((ProcessorVersion::DELTA > 0) ? ($$str({"."_s, $$str(ProcessorVersion::DELTA)})) : (""_s))}));
}

void clinit$ProcessorVersion($Class* class$) {
	ProcessorVersion::MAJOR = 1;
	ProcessorVersion::MINOR = 0;
	ProcessorVersion::DELTA = 0;
}

ProcessorVersion::ProcessorVersion() {
}

$Class* ProcessorVersion::load$($String* name, bool initialize) {
	$loadClass(ProcessorVersion, name, initialize, &_ProcessorVersion_ClassInfo_, clinit$ProcessorVersion, allocate$ProcessorVersion);
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
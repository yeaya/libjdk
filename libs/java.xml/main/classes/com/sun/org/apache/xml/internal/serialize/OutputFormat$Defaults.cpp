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

$FieldInfo _OutputFormat$Defaults_FieldInfo_[] = {
	{"Indent", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OutputFormat$Defaults, Indent)},
	{"Encoding", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputFormat$Defaults, Encoding)},
	{"LineWidth", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OutputFormat$Defaults, LineWidth)},
	{}
};

$MethodInfo _OutputFormat$Defaults_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OutputFormat$Defaults, init$, void)},
	{}
};

$InnerClassInfo _OutputFormat$Defaults_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serialize.OutputFormat$Defaults", "com.sun.org.apache.xml.internal.serialize.OutputFormat", "Defaults", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _OutputFormat$Defaults_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.OutputFormat$Defaults",
	"java.lang.Object",
	nullptr,
	_OutputFormat$Defaults_FieldInfo_,
	_OutputFormat$Defaults_MethodInfo_,
	nullptr,
	nullptr,
	_OutputFormat$Defaults_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serialize.OutputFormat"
};

$Object* allocate$OutputFormat$Defaults($Class* clazz) {
	return $of($alloc(OutputFormat$Defaults));
}

$String* OutputFormat$Defaults::Encoding = nullptr;

void OutputFormat$Defaults::init$() {
}

OutputFormat$Defaults::OutputFormat$Defaults() {
}

void clinit$OutputFormat$Defaults($Class* class$) {
	$assignStatic(OutputFormat$Defaults::Encoding, "UTF-8"_s);
}

$Class* OutputFormat$Defaults::load$($String* name, bool initialize) {
	$loadClass(OutputFormat$Defaults, name, initialize, &_OutputFormat$Defaults_ClassInfo_, clinit$OutputFormat$Defaults, allocate$OutputFormat$Defaults);
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
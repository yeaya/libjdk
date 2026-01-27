#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$1.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <jcpp.h>

using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _MethodGenerator$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;", nullptr, $FINAL | $SYNTHETIC, $field(MethodGenerator$1, this$0)},
	{}
};

$MethodInfo _MethodGenerator$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;)V", nullptr, 0, $method(MethodGenerator$1, init$, void, $MethodGenerator*, $String*, $String*, $String*, int32_t, $StringArray*, $Stylesheet*)},
	{"isExternal", "()Z", nullptr, $PUBLIC, $virtualMethod(MethodGenerator$1, isExternal, bool)},
	{}
};

$EnclosingMethodInfo _MethodGenerator$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator",
	"outline",
	"(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)Lcom/sun/org/apache/bcel/internal/classfile/Method;"
};

$InnerClassInfo _MethodGenerator$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodGenerator$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$1",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ClassGenerator",
	nullptr,
	_MethodGenerator$1_FieldInfo_,
	_MethodGenerator$1_MethodInfo_,
	nullptr,
	&_MethodGenerator$1_EnclosingMethodInfo_,
	_MethodGenerator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator"
};

$Object* allocate$MethodGenerator$1($Class* clazz) {
	return $of($alloc(MethodGenerator$1));
}

void MethodGenerator$1::init$($MethodGenerator* this$0, $String* class_name, $String* super_class_name, $String* file_name, int32_t access_flags, $StringArray* interfaces, $Stylesheet* stylesheet) {
	$set(this, this$0, this$0);
	$ClassGenerator::init$(class_name, super_class_name, file_name, access_flags, interfaces, stylesheet);
}

bool MethodGenerator$1::isExternal() {
	return true;
}

MethodGenerator$1::MethodGenerator$1() {
}

$Class* MethodGenerator$1::load$($String* name, bool initialize) {
	$loadClass(MethodGenerator$1, name, initialize, &_MethodGenerator$1_ClassInfo_, allocate$MethodGenerator$1);
	return class$;
}

$Class* MethodGenerator$1::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
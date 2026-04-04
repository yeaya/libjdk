#include <com/sun/tools/javac/jvm/ClassReader$ClassAttributeProxy.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassReader$ProxyVisitor.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassReader$ProxyVisitor = ::com::sun::tools::javac::jvm::ClassReader$ProxyVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void ClassReader$ClassAttributeProxy::init$($Type* classType) {
	$Attribute::init$(nullptr);
	$set(this, classType, classType);
}

void ClassReader$ClassAttributeProxy::accept($Attribute$Visitor* v) {
	$nc($cast($ClassReader$ProxyVisitor, v))->visitClassAttributeProxy(this);
}

$String* ClassReader$ClassAttributeProxy::toString() {
	return $str({"/*proxy class*/"_s, this->classType, ".class"_s});
}

ClassReader$ClassAttributeProxy::ClassReader$ClassAttributeProxy() {
}

$Class* ClassReader$ClassAttributeProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classType", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(ClassReader$ClassAttributeProxy, classType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(ClassReader$ClassAttributeProxy, init$, void, $Type*)},
		{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ClassReader$ClassAttributeProxy, accept, void, $Attribute$Visitor*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassReader$ClassAttributeProxy, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$ClassAttributeProxy", "com.sun.tools.javac.jvm.ClassReader", "ClassAttributeProxy", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassReader$ClassAttributeProxy",
		"com.sun.tools.javac.code.Attribute",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.ClassReader"
	};
	$loadClass(ClassReader$ClassAttributeProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$ClassAttributeProxy);
	});
	return class$;
}

$Class* ClassReader$ClassAttributeProxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
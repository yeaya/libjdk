#include <com/sun/tools/javac/jvm/ClassReader$EnumAttributeProxy.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassReader$ProxyVisitor.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassReader$ProxyVisitor = ::com::sun::tools::javac::jvm::ClassReader$ProxyVisitor;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void ClassReader$EnumAttributeProxy::init$($Type* enumType, $Name* enumerator) {
	$Attribute::init$(nullptr);
	$set(this, enumType, enumType);
	$set(this, enumerator, enumerator);
}

void ClassReader$EnumAttributeProxy::accept($Attribute$Visitor* v) {
	$nc($cast($ClassReader$ProxyVisitor, v))->visitEnumAttributeProxy(this);
}

$String* ClassReader$EnumAttributeProxy::toString() {
	return $str({"/*proxy enum*/"_s, this->enumType, "."_s, this->enumerator});
}

ClassReader$EnumAttributeProxy::ClassReader$EnumAttributeProxy() {
}

$Class* ClassReader$EnumAttributeProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"enumType", "Lcom/sun/tools/javac/code/Type;", nullptr, 0, $field(ClassReader$EnumAttributeProxy, enumType)},
		{"enumerator", "Lcom/sun/tools/javac/util/Name;", nullptr, 0, $field(ClassReader$EnumAttributeProxy, enumerator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/Name;)V", nullptr, $PUBLIC, $method(ClassReader$EnumAttributeProxy, init$, void, $Type*, $Name*)},
		{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ClassReader$EnumAttributeProxy, accept, void, $Attribute$Visitor*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ClassReader$EnumAttributeProxy, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$EnumAttributeProxy", "com.sun.tools.javac.jvm.ClassReader", "EnumAttributeProxy", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassReader$EnumAttributeProxy",
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
	$loadClass(ClassReader$EnumAttributeProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$EnumAttributeProxy);
	});
	return class$;
}

$Class* ClassReader$EnumAttributeProxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
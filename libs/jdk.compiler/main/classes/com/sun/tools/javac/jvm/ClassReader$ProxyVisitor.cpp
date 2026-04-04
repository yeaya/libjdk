#include <com/sun/tools/javac/jvm/ClassReader$ProxyVisitor.h>
#include <com/sun/tools/javac/jvm/ClassReader$ArrayAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$ClassAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$EnumAttributeProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <jcpp.h>

using $ClassReader$ArrayAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$ArrayAttributeProxy;
using $ClassReader$ClassAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$ClassAttributeProxy;
using $ClassReader$CompoundAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy;
using $ClassReader$EnumAttributeProxy = ::com::sun::tools::javac::jvm::ClassReader$EnumAttributeProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$Class* ClassReader$ProxyVisitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"visitArrayAttributeProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$ArrayAttributeProxy;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassReader$ProxyVisitor, visitArrayAttributeProxy, void, $ClassReader$ArrayAttributeProxy*)},
		{"visitClassAttributeProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$ClassAttributeProxy;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassReader$ProxyVisitor, visitClassAttributeProxy, void, $ClassReader$ClassAttributeProxy*)},
		{"visitCompoundAnnotationProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassReader$ProxyVisitor, visitCompoundAnnotationProxy, void, $ClassReader$CompoundAnnotationProxy*)},
		{"visitEnumAttributeProxy", "(Lcom/sun/tools/javac/jvm/ClassReader$EnumAttributeProxy;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassReader$ProxyVisitor, visitEnumAttributeProxy, void, $ClassReader$EnumAttributeProxy*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$ProxyVisitor", "com.sun.tools.javac.jvm.ClassReader", "ProxyVisitor", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.Attribute$Visitor", "com.sun.tools.javac.code.Attribute", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.jvm.ClassReader$ProxyVisitor",
		nullptr,
		"com.sun.tools.javac.code.Attribute$Visitor",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.ClassReader"
	};
	$loadClass(ClassReader$ProxyVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$ProxyVisitor);
	});
	return class$;
}

$Class* ClassReader$ProxyVisitor::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
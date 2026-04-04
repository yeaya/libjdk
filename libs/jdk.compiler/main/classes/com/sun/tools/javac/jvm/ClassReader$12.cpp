#include <com/sun/tools/javac/jvm/ClassReader$12.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AttributeReader = ::com::sun::tools::javac::jvm::ClassReader$AttributeReader;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void ClassReader$12::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

void ClassReader$12::read($Symbol* sym, int32_t attrLen) {
	this->this$0->attachAnnotationDefault(sym);
}

ClassReader$12::ClassReader$12() {
}

$Class* ClassReader$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$12, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(ClassReader$12, init$, void, $ClassReader*, $Name*, $ClassFile$Version*, $Set*)},
		{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED, $virtualMethod(ClassReader$12, read, void, $Symbol*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.ClassReader",
		"initAttributeReaders",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$12", nullptr, nullptr, 0},
		{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassReader$12",
		"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.ClassReader"
	};
	$loadClass(ClassReader$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$12);
	});
	return class$;
}

$Class* ClassReader$12::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
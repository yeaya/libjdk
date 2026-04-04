#include <com/sun/tools/javac/jvm/ClassReader$8.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader$SourceFileObject.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/PoolReader.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef PCK

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AttributeReader = ::com::sun::tools::javac::jvm::ClassReader$AttributeReader;
using $ClassReader$SourceFileObject = ::com::sun::tools::javac::jvm::ClassReader$SourceFileObject;
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

void ClassReader$8::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

void ClassReader$8::read($Symbol* sym, int32_t attrLen) {
	$useLocalObjectStack();
	$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, sym));
	$var($Name, n, $nc(this->this$0->poolReader)->getName(this->this$0->nextChar()));
	$set($nc(c), sourcefile, $new($ClassReader$SourceFileObject, n));
	$var($String, sn, $nc(n)->toString());
	$init($Kinds$Kind);
	bool var$0 = $nc(c->owner)->kind == $Kinds$Kind::PCK && $nc(sn)->endsWith(".java"_s);
	if (var$0 && !sn->equals($$str({$($nc(c->name)->toString()), ".java"_s}))) {
		c->flags_field |= (int64_t)0x0000100000000000;
	}
}

ClassReader$8::ClassReader$8() {
}

$Class* ClassReader$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$8, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(ClassReader$8, init$, void, $ClassReader*, $Name*, $ClassFile$Version*, $Set*)},
		{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED, $virtualMethod(ClassReader$8, read, void, $Symbol*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.ClassReader",
		"initAttributeReaders",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$8", nullptr, nullptr, 0},
		{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassReader$8",
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
	$loadClass(ClassReader$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$8);
	});
	return class$;
}

$Class* ClassReader$8::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
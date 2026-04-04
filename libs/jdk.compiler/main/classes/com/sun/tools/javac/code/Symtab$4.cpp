#include <com/sun/tools/javac/code/Symtab$4.h>
#include <com/sun/tools/javac/code/Directive$RequiresDirective.h>
#include <com/sun/tools/javac/code/Directive$RequiresFlag.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/util/EnumSet.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MANDATED

using $Directive$RequiresDirective = ::com::sun::tools::javac::code::Directive$RequiresDirective;
using $Directive$RequiresFlag = ::com::sun::tools::javac::code::Directive$RequiresFlag;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Symtab$4::init$($Symtab* this$0, $Name* name, $Symbol* owner) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$Symbol$ModuleSymbol::init$(name, owner);
	{
		$set(this, directives, $List::nil());
		$set(this, exports, $List::nil());
		$set(this, provides, $List::nil());
		$set(this, uses, $List::nil());
		$var($Symbol$ModuleSymbol, java_base, this->this$0->enterModule($nc(this->this$0->names)->java_base));
		$init($Directive$RequiresFlag);
		$var($Directive$RequiresDirective, d, $new($Directive$RequiresDirective, java_base, $($EnumSet::of($Directive$RequiresFlag::MANDATED))));
		$set(this, requires, $List::of(d));
	}
}

Symtab$4::Symtab$4() {
}

$Class* Symtab$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $FINAL | $SYNTHETIC, $field(Symtab$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(Symtab$4, init$, void, $Symtab*, $Name*, $Symbol*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Symtab",
		"<init>",
		"(Lcom/sun/tools/javac/util/Context;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symtab$4", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Symbol$ModuleSymbol", "com.sun.tools.javac.code.Symbol", "ModuleSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Symtab$4",
		"com.sun.tools.javac.code.Symbol$ModuleSymbol",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Symtab"
	};
	$loadClass(Symtab$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Symtab$4));
	});
	return class$;
}

$Class* Symtab$4::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com
#include <javax/print/attribute/standard/DialogOwner$Accessor.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <sun/print/DialogOwnerAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;
using $DialogOwnerAccessor = ::sun::print::DialogOwnerAccessor;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

void DialogOwner$Accessor::init$() {
	$DialogOwnerAccessor::init$();
}

int64_t DialogOwner$Accessor::getOwnerID($DialogOwner* owner) {
	return $nc(owner)->getID();
}

DialogOwner$Accessor::DialogOwner$Accessor() {
}

$Class* DialogOwner$Accessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DialogOwner$Accessor, init$, void)},
		{"getOwnerID", "(Ljavax/print/attribute/standard/DialogOwner;)J", nullptr, $PUBLIC, $virtualMethod(DialogOwner$Accessor, getOwnerID, int64_t, $DialogOwner*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.attribute.standard.DialogOwner$Accessor", "javax.print.attribute.standard.DialogOwner", "Accessor", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.attribute.standard.DialogOwner$Accessor",
		"sun.print.DialogOwnerAccessor",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.print.attribute.standard.DialogOwner"
	};
	$loadClass(DialogOwner$Accessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DialogOwner$Accessor);
	});
	return class$;
}

$Class* DialogOwner$Accessor::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax
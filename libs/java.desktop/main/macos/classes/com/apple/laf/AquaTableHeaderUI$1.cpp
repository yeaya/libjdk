#include <com/apple/laf/AquaTableHeaderUI$1.h>
#include <com/apple/laf/AquaTableHeaderUI$1$1.h>
#include <com/apple/laf/AquaTableHeaderUI$1$2.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <jcpp.h>

using $ClientPropertyApplicator$PropertyArray = $Array<::com::apple::laf::ClientPropertyApplicator$Property>;
using $AquaTableHeaderUI$1$1 = ::com::apple::laf::AquaTableHeaderUI$1$1;
using $AquaTableHeaderUI$1$2 = ::com::apple::laf::AquaTableHeaderUI$1$2;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClientPropertyApplicator = ::com::apple::laf::ClientPropertyApplicator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaTableHeaderUI$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaTableHeaderUI$1::getInstance() {
	$useLocalObjectStack();
	return $new($ClientPropertyApplicator, $$new($ClientPropertyApplicator$PropertyArray, {
		$$new($AquaTableHeaderUI$1$1, this, "JTableHeader.selectedColumn"_s),
		$$new($AquaTableHeaderUI$1$2, this, "JTableHeader.sortDirection"_s)
	}));
}

AquaTableHeaderUI$1::AquaTableHeaderUI$1() {
}

$Class* AquaTableHeaderUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaTableHeaderUI$1, init$, void)},
		{"getInstance", "()Lcom/apple/laf/ClientPropertyApplicator;", "()Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/table/JTableHeader;Ljavax/swing/table/JTableHeader;>;", $PROTECTED, $virtualMethod(AquaTableHeaderUI$1, getInstance, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTableHeaderUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTableHeaderUI$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaTableHeaderUI$1$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaTableHeaderUI$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTableHeaderUI$1",
		"com.apple.laf.AquaUtils$RecyclableSingleton",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/table/JTableHeader;Ljavax/swing/table/JTableHeader;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTableHeaderUI"
	};
	$loadClass(AquaTableHeaderUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTableHeaderUI$1);
	});
	return class$;
}

$Class* AquaTableHeaderUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com
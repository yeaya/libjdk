#include <com/sun/tools/javac/jvm/Items$SelfItem.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <jcpp.h>

using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void Items$SelfItem::init$($Items* this$0, bool isSuper) {
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, 4);
	this->isSuper = isSuper;
}

$Items$Item* Items$SelfItem::load() {
	$nc(this->this$0->code)->emitop0(42);
	return $nc(this->this$0->stackItem)->get(this->typecode);
}

$String* Items$SelfItem::toString() {
	return this->isSuper ? "super"_s : "this"_s;
}

Items$SelfItem::Items$SelfItem() {
}

$Class* Items$SelfItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$SelfItem, this$0)},
		{"isSuper", "Z", nullptr, 0, $field(Items$SelfItem, isSuper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/Items;Z)V", nullptr, 0, $method(Items$SelfItem, init$, void, $Items*, bool)},
		{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0, $virtualMethod(Items$SelfItem, load, $Items$Item*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Items$SelfItem, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Items$SelfItem", "com.sun.tools.javac.jvm.Items", "SelfItem", 0},
		{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.Items$SelfItem",
		"com.sun.tools.javac.jvm.Items$Item",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.Items"
	};
	$loadClass(Items$SelfItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Items$SelfItem);
	});
	return class$;
}

$Class* Items$SelfItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
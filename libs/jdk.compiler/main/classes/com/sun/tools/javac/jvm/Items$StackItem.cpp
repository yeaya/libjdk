#include <com/sun/tools/javac/jvm/Items$StackItem.h>
#include <com/sun/tools/javac/jvm/ByteCodes.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <jcpp.h>

using $ByteCodes = ::com::sun::tools::javac::jvm::ByteCodes;
using $Code = ::com::sun::tools::javac::jvm::Code;
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

void Items$StackItem::init$($Items* this$0, int32_t typecode) {
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, typecode);
}

$Items$Item* Items$StackItem::load() {
	return this;
}

void Items$StackItem::duplicate() {
	$nc(this->this$0->code)->emitop0(width() == 2 ? 92 : 89);
}

void Items$StackItem::drop() {
	$nc(this->this$0->code)->emitop0(width() == 2 ? 88 : 87);
}

void Items$StackItem::stash(int32_t toscode) {
	int32_t var$0 = width() == 2 ? 91 : 90;
	$nc(this->this$0->code)->emitop0(var$0 + 3 * ($Code::width(toscode) - 1));
}

int32_t Items$StackItem::width() {
	return $Code::width(this->typecode);
}

$String* Items$StackItem::toString() {
	$init($ByteCodes);
	return $str({"stack("_s, $nc($ByteCodes::typecodeNames)->get(this->typecode), ")"_s});
}

Items$StackItem::Items$StackItem() {
}

$Class* Items$StackItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$StackItem, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/Items;I)V", nullptr, 0, $method(Items$StackItem, init$, void, $Items*, int32_t)},
		{"drop", "()V", nullptr, 0, $virtualMethod(Items$StackItem, drop, void)},
		{"duplicate", "()V", nullptr, 0, $virtualMethod(Items$StackItem, duplicate, void)},
		{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0, $virtualMethod(Items$StackItem, load, $Items$Item*)},
		{"stash", "(I)V", nullptr, 0, $virtualMethod(Items$StackItem, stash, void, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Items$StackItem, toString, $String*)},
		{"width", "()I", nullptr, 0, $virtualMethod(Items$StackItem, width, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Items$StackItem", "com.sun.tools.javac.jvm.Items", "StackItem", 0},
		{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.Items$StackItem",
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
	$loadClass(Items$StackItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Items$StackItem);
	});
	return class$;
}

$Class* Items$StackItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
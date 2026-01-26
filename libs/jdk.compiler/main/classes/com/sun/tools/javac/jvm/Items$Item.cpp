#include <com/sun/tools/javac/jvm/Items$Item.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$CondItem.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$CondItem = ::com::sun::tools::javac::jvm::Items$CondItem;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Items$Item_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$Item, this$0)},
	{"typecode", "I", nullptr, 0, $field(Items$Item, typecode)},
	{}
};

$MethodInfo _Items$Item_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Items;I)V", nullptr, 0, $method(Items$Item, init$, void, $Items*, int32_t)},
	{"coerce", "(I)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0, $virtualMethod(Items$Item, coerce, Items$Item*, int32_t)},
	{"coerce", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0, $virtualMethod(Items$Item, coerce, Items$Item*, $Type*)},
	{"drop", "()V", nullptr, 0, $virtualMethod(Items$Item, drop, void)},
	{"duplicate", "()V", nullptr, 0, $virtualMethod(Items$Item, duplicate, void)},
	{"invoke", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0, $virtualMethod(Items$Item, invoke, Items$Item*)},
	{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0, $virtualMethod(Items$Item, load, Items$Item*)},
	{"mkCond", "()Lcom/sun/tools/javac/jvm/Items$CondItem;", nullptr, 0, $virtualMethod(Items$Item, mkCond, $Items$CondItem*)},
	{"stash", "(I)V", nullptr, 0, $virtualMethod(Items$Item, stash, void, int32_t)},
	{"store", "()V", nullptr, 0, $virtualMethod(Items$Item, store, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"width", "()I", nullptr, 0, $virtualMethod(Items$Item, width, int32_t)},
	{}
};

$InnerClassInfo _Items$Item_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
	{}
};

$ClassInfo _Items$Item_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.jvm.Items$Item",
	"java.lang.Object",
	nullptr,
	_Items$Item_FieldInfo_,
	_Items$Item_MethodInfo_,
	nullptr,
	nullptr,
	_Items$Item_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items"
};

$Object* allocate$Items$Item($Class* clazz) {
	return $of($alloc(Items$Item));
}

$String* Items$Item::toString() {
	 return this->$Object::toString();
}

void Items$Item::init$($Items* this$0, int32_t typecode) {
	$set(this, this$0, this$0);
	this->typecode = typecode;
}

Items$Item* Items$Item::load() {
	$throwNew($AssertionError);
	$shouldNotReachHere();
}

void Items$Item::store() {
	$throwNew($AssertionError, $of($$str({"store unsupported: "_s, this})));
}

Items$Item* Items$Item::invoke() {
	$throwNew($AssertionError, $of(this));
	$shouldNotReachHere();
}

void Items$Item::duplicate() {
}

void Items$Item::drop() {
}

void Items$Item::stash(int32_t toscode) {
	$nc($nc(this->this$0->stackItem)->get(toscode))->duplicate();
}

$Items$CondItem* Items$Item::mkCond() {
	load();
	return this->this$0->makeCondItem(154);
}

Items$Item* Items$Item::coerce(int32_t targetcode) {
	if (this->typecode == targetcode) {
		return this;
	} else {
		load();
		int32_t typecode1 = $Code::truncate(this->typecode);
		int32_t targetcode1 = $Code::truncate(targetcode);
		if (typecode1 != targetcode1) {
			int32_t offset = targetcode1 > typecode1 ? targetcode1 - 1 : targetcode1;
			$nc(this->this$0->code)->emitop0(133 + typecode1 * 3 + offset);
		}
		if (targetcode != targetcode1) {
			$nc(this->this$0->code)->emitop0(145 + targetcode - 5);
		}
		return $nc(this->this$0->stackItem)->get(targetcode);
	}
}

Items$Item* Items$Item::coerce($Type* targettype) {
	return coerce($Code::typecode(targettype));
}

int32_t Items$Item::width() {
	return 0;
}

Items$Item::Items$Item() {
}

$Class* Items$Item::load$($String* name, bool initialize) {
	$loadClass(Items$Item, name, initialize, &_Items$Item_ClassInfo_, allocate$Items$Item);
	return class$;
}

$Class* Items$Item::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
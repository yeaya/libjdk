#include <com/sun/tools/javac/jvm/Items$MemberItem.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/ToIntBiFunction.h>
#include <jcpp.h>

#undef INTERFACE

using $Flags = ::com::sun::tools::javac::code::Flags;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Code = ::com::sun::tools::javac::jvm::Code;
using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ToIntBiFunction = ::java::util::function::ToIntBiFunction;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class Items$MemberItem$$Lambda$putMember : public $ToIntBiFunction {
	$class(Items$MemberItem$$Lambda$putMember, $NO_CLASS_INIT, $ToIntBiFunction)
public:
	void init$() {
	}
	virtual int32_t applyAsInt(Object$* inst$, Object$* s) override {
		 return $sure($PoolWriter, inst$)->putMember($cast($Symbol, s));
	}
};
$Class* Items$MemberItem$$Lambda$putMember::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Items$MemberItem$$Lambda$putMember, init$, void)},
		{"applyAsInt", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Items$MemberItem$$Lambda$putMember, applyAsInt, int32_t, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.jvm.Items$MemberItem$$Lambda$putMember",
		"java.lang.Object",
		"java.util.function.ToIntBiFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Items$MemberItem$$Lambda$putMember, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Items$MemberItem$$Lambda$putMember);
	});
	return class$;
}
$Class* Items$MemberItem$$Lambda$putMember::class$ = nullptr;

void Items$MemberItem::init$($Items* this$0, $Symbol* member, bool nonvirtual) {
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, $Code::typecode($($nc(member)->erasure(this$0->types))));
	$set(this, member, member);
	this->nonvirtual = nonvirtual;
}

$Items$Item* Items$MemberItem::load() {
	$nc(this->this$0->code)->emitop2(180, this->member, $$new(Items$MemberItem$$Lambda$putMember));
	return $nc(this->this$0->stackItem)->get(this->typecode);
}

void Items$MemberItem::store() {
	$nc(this->this$0->code)->emitop2(181, this->member, $$new(Items$MemberItem$$Lambda$putMember));
}

$Items$Item* Items$MemberItem::invoke() {
	$var($Type$MethodType, mtype, $cast($Type$MethodType, $nc(this->member)->externalType(this->this$0->types)));
	int32_t rescode = $Code::typecode($nc(mtype)->restype);
	if (($nc($nc(this->member)->owner)->flags() & $Flags::INTERFACE) != 0 && !this->nonvirtual) {
		$nc(this->this$0->code)->emitInvokeinterface(this->member, mtype);
	} else if (this->nonvirtual) {
		$nc(this->this$0->code)->emitInvokespecial(this->member, mtype);
	} else {
		$nc(this->this$0->code)->emitInvokevirtual(this->member, mtype);
	}
	return $nc(this->this$0->stackItem)->get(rescode);
}

void Items$MemberItem::duplicate() {
	$nc($nc(this->this$0->stackItem)->get(4))->duplicate();
}

void Items$MemberItem::drop() {
	$nc($nc(this->this$0->stackItem)->get(4))->drop();
}

void Items$MemberItem::stash(int32_t toscode) {
	$nc($nc(this->this$0->stackItem)->get(4))->stash(toscode);
}

int32_t Items$MemberItem::width() {
	return 1;
}

$String* Items$MemberItem::toString() {
	return $str({"member("_s, this->member, (this->nonvirtual ? " nonvirtual)"_s : ")"_s)});
}

Items$MemberItem::Items$MemberItem() {
}

$Class* Items$MemberItem::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.jvm.Items$MemberItem$$Lambda$putMember")) {
			return Items$MemberItem$$Lambda$putMember::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$MemberItem, this$0)},
		{"member", "Lcom/sun/tools/javac/code/Symbol;", nullptr, 0, $field(Items$MemberItem, member)},
		{"nonvirtual", "Z", nullptr, 0, $field(Items$MemberItem, nonvirtual)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/Items;Lcom/sun/tools/javac/code/Symbol;Z)V", nullptr, 0, $method(Items$MemberItem, init$, void, $Items*, $Symbol*, bool)},
		{"drop", "()V", nullptr, 0, $virtualMethod(Items$MemberItem, drop, void)},
		{"duplicate", "()V", nullptr, 0, $virtualMethod(Items$MemberItem, duplicate, void)},
		{"invoke", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0, $virtualMethod(Items$MemberItem, invoke, $Items$Item*)},
		{"load", "()Lcom/sun/tools/javac/jvm/Items$Item;", nullptr, 0, $virtualMethod(Items$MemberItem, load, $Items$Item*)},
		{"stash", "(I)V", nullptr, 0, $virtualMethod(Items$MemberItem, stash, void, int32_t)},
		{"store", "()V", nullptr, 0, $virtualMethod(Items$MemberItem, store, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Items$MemberItem, toString, $String*)},
		{"width", "()I", nullptr, 0, $virtualMethod(Items$MemberItem, width, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Items$MemberItem", "com.sun.tools.javac.jvm.Items", "MemberItem", 0},
		{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.Items$MemberItem",
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
	$loadClass(Items$MemberItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Items$MemberItem);
	});
	return class$;
}

$Class* Items$MemberItem::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com
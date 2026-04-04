#include <javax/print/attribute/standard/DialogOwner.h>
#include <java/awt/Window.h>
#include <javax/print/attribute/standard/DialogOwner$Accessor.h>
#include <sun/print/DialogOwnerAccessor.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DialogOwner$Accessor = ::javax::print::attribute::standard::DialogOwner$Accessor;
using $DialogOwnerAccessor = ::sun::print::DialogOwnerAccessor;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$DialogOwner$Accessor* DialogOwner::accessor = nullptr;

void DialogOwner::init$() {
}

void DialogOwner::init$($Window* owner) {
	$set(this, owner, owner);
}

void DialogOwner::init$(int64_t id) {
	this->id = id;
}

int64_t DialogOwner::getID() {
	return this->id;
}

$Window* DialogOwner::getOwner() {
	return this->owner;
}

$Class* DialogOwner::getCategory() {
	return DialogOwner::class$;
}

$String* DialogOwner::getName() {
	return "dialog-owner"_s;
}

void DialogOwner::clinit$($Class* clazz) {
	$assignStatic(DialogOwner::accessor, $new($DialogOwner$Accessor));
	{
		$DialogOwnerAccessor::setAccessor(DialogOwner::accessor);
	}
}

DialogOwner::DialogOwner() {
}

$Class* DialogOwner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"accessor", "Ljavax/print/attribute/standard/DialogOwner$Accessor;", nullptr, $PRIVATE | $STATIC, $staticField(DialogOwner, accessor)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DialogOwner, serialVersionUID)},
		{"owner", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(DialogOwner, owner)},
		{"id", "J", nullptr, $PRIVATE | $TRANSIENT, $field(DialogOwner, id)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DialogOwner, init$, void)},
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(DialogOwner, init$, void, $Window*)},
		{"<init>", "(J)V", nullptr, 0, $method(DialogOwner, init$, void, int64_t)},
		{"getCategory", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljavax/print/attribute/Attribute;>;", $PUBLIC | $FINAL, $virtualMethod(DialogOwner, getCategory, $Class*)},
		{"getID", "()J", nullptr, 0, $method(DialogOwner, getID, int64_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(DialogOwner, getName, $String*)},
		{"getOwner", "()Ljava/awt/Window;", nullptr, $PUBLIC, $method(DialogOwner, getOwner, $Window*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.attribute.standard.DialogOwner$Accessor", "javax.print.attribute.standard.DialogOwner", "Accessor", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.print.attribute.standard.DialogOwner",
		"java.lang.Object",
		"javax.print.attribute.PrintRequestAttribute",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.print.attribute.standard.DialogOwner$Accessor"
	};
	$loadClass(DialogOwner, name, initialize, &classInfo$$, DialogOwner::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DialogOwner);
	});
	return class$;
}

$Class* DialogOwner::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax
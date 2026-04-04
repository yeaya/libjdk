#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/DirContext.h>
#include <jcpp.h>

#undef ADD_ATTRIBUTE
#undef REMOVE_ATTRIBUTE
#undef REPLACE_ATTRIBUTE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::naming::directory::Attribute;
using $DirContext = ::javax::naming::directory::DirContext;

namespace javax {
	namespace naming {
		namespace directory {

void ModificationItem::init$(int32_t mod_op, $Attribute* attr) {
	$useLocalObjectStack();
	switch (mod_op) {
	case $DirContext::ADD_ATTRIBUTE:
	case $DirContext::REPLACE_ATTRIBUTE:
	case $DirContext::REMOVE_ATTRIBUTE:
		if (attr == nullptr) {
			$throwNew($IllegalArgumentException, "Must specify non-null attribute for modification"_s);
		}
		this->mod_op = mod_op;
		$set(this, attr, attr);
		break;
	default:
		$throwNew($IllegalArgumentException, $$str({"Invalid modification code "_s, $$str(mod_op)}));
	}
}

int32_t ModificationItem::getModificationOp() {
	return this->mod_op;
}

$Attribute* ModificationItem::getAttribute() {
	return this->attr;
}

$String* ModificationItem::toString() {
	$useLocalObjectStack();
	switch (this->mod_op) {
	case $DirContext::ADD_ATTRIBUTE:
		return ($str({"Add attribute: "_s, $($nc(this->attr)->toString())}));
	case $DirContext::REPLACE_ATTRIBUTE:
		return ($str({"Replace attribute: "_s, $($nc(this->attr)->toString())}));
	case $DirContext::REMOVE_ATTRIBUTE:
		return ($str({"Remove attribute: "_s, $($nc(this->attr)->toString())}));
	}
	return ""_s;
}

ModificationItem::ModificationItem() {
}

$Class* ModificationItem::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mod_op", "I", nullptr, $PRIVATE, $field(ModificationItem, mod_op)},
		{"attr", "Ljavax/naming/directory/Attribute;", nullptr, $PRIVATE, $field(ModificationItem, attr)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModificationItem, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjavax/naming/directory/Attribute;)V", nullptr, $PUBLIC, $method(ModificationItem, init$, void, int32_t, $Attribute*)},
		{"getAttribute", "()Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC, $virtualMethod(ModificationItem, getAttribute, $Attribute*)},
		{"getModificationOp", "()I", nullptr, $PUBLIC, $virtualMethod(ModificationItem, getModificationOp, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModificationItem, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.ModificationItem",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModificationItem, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModificationItem);
	});
	return class$;
}

$Class* ModificationItem::class$ = nullptr;

		} // directory
	} // naming
} // javax
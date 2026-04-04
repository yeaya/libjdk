#include <javax/naming/directory/SearchResult.h>
#include <javax/naming/Binding.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Binding = ::javax::naming::Binding;
using $Attributes = ::javax::naming::directory::Attributes;

namespace javax {
	namespace naming {
		namespace directory {

void SearchResult::init$($String* name, Object$* obj, $Attributes* attrs) {
	$Binding::init$(name, obj);
	$set(this, attrs, attrs);
}

void SearchResult::init$($String* name, Object$* obj, $Attributes* attrs, bool isRelative) {
	$Binding::init$(name, obj, isRelative);
	$set(this, attrs, attrs);
}

void SearchResult::init$($String* name, $String* className, Object$* obj, $Attributes* attrs) {
	$Binding::init$(name, className, obj);
	$set(this, attrs, attrs);
}

void SearchResult::init$($String* name, $String* className, Object$* obj, $Attributes* attrs, bool isRelative) {
	$Binding::init$(name, className, obj, isRelative);
	$set(this, attrs, attrs);
}

$Attributes* SearchResult::getAttributes() {
	return this->attrs;
}

void SearchResult::setAttributes($Attributes* attrs) {
	$set(this, attrs, attrs);
}

$String* SearchResult::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($Binding::toString()));
	var$0->append(":"_s);
	var$0->append($(getAttributes()));
	return $str(var$0);
}

SearchResult::SearchResult() {
}

$Class* SearchResult::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"attrs", "Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE, $field(SearchResult, attrs)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SearchResult, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, $method(SearchResult, init$, void, $String*, Object$*, $Attributes*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Z)V", nullptr, $PUBLIC, $method(SearchResult, init$, void, $String*, Object$*, $Attributes*, bool)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, $method(SearchResult, init$, void, $String*, $String*, Object$*, $Attributes*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Z)V", nullptr, $PUBLIC, $method(SearchResult, init$, void, $String*, $String*, Object$*, $Attributes*, bool)},
		{"getAttributes", "()Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, $virtualMethod(SearchResult, getAttributes, $Attributes*)},
		{"setAttributes", "(Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(SearchResult, setAttributes, void, $Attributes*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SearchResult, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.SearchResult",
		"javax.naming.Binding",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SearchResult, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SearchResult);
	});
	return class$;
}

$Class* SearchResult::class$ = nullptr;

		} // directory
	} // naming
} // javax
#include <com/sun/jndi/ldap/SearchResultWithControls.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/SearchResult.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::javax::naming::directory::Attributes;
using $SearchResult = ::javax::naming::directory::SearchResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$String* SearchResultWithControls::toString() {
	 return this->$SearchResult::toString();
}

int32_t SearchResultWithControls::hashCode() {
	 return this->$SearchResult::hashCode();
}

bool SearchResultWithControls::equals(Object$* arg0) {
	 return this->$SearchResult::equals(arg0);
}

$Object* SearchResultWithControls::clone() {
	 return this->$SearchResult::clone();
}

void SearchResultWithControls::finalize() {
	this->$SearchResult::finalize();
}

void SearchResultWithControls::init$($String* name, Object$* obj, $Attributes* attrs, bool isRelative, $ControlArray* controls) {
	$SearchResult::init$(name, obj, attrs, isRelative);
	$set(this, controls, controls);
}

$ControlArray* SearchResultWithControls::getControls() {
	return this->controls;
}

SearchResultWithControls::SearchResultWithControls() {
}

$Class* SearchResultWithControls::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"controls", "[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE, $field(SearchResultWithControls, controls)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SearchResultWithControls, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Z[Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, $method(SearchResultWithControls, init$, void, $String*, Object$*, $Attributes*, bool, $ControlArray*)},
		{"getControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, $virtualMethod(SearchResultWithControls, getControls, $ControlArray*), "javax.naming.NamingException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.ldap.SearchResultWithControls",
		"javax.naming.directory.SearchResult",
		"javax.naming.ldap.HasControls",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SearchResultWithControls, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SearchResultWithControls));
	});
	return class$;
}

$Class* SearchResultWithControls::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com
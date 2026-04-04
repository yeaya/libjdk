#include <javax/swing/text/html/parser/Entity.h>
#include <java/util/Hashtable.h>
#include <javax/swing/text/html/parser/DTDConstants.h>
#include <jcpp.h>

#undef CDATA
#undef ENDTAG
#undef GENERAL
#undef MD
#undef MS
#undef PARAMETER
#undef PI
#undef PUBLIC
#undef SDATA
#undef STARTTAG
#undef SYSTEM

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $DTDConstants = ::javax::swing::text::html::parser::DTDConstants;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				namespace parser {

$Hashtable* Entity::entityTypes = nullptr;

void Entity::init$($String* name, int32_t type, $chars* data) {
	$set(this, name, name);
	this->type = type;
	$set(this, data, data);
}

$String* Entity::getName() {
	return this->name;
}

int32_t Entity::getType() {
	return this->type & 0xffff;
}

bool Entity::isParameter() {
	return (this->type & $DTDConstants::PARAMETER) != 0;
}

bool Entity::isGeneral() {
	return (this->type & $DTDConstants::GENERAL) != 0;
}

$chars* Entity::getData() {
	return this->data;
}

$String* Entity::getString() {
	return $new($String, this->data, 0, $nc(this->data)->length);
}

int32_t Entity::name2type($String* nm) {
	$init(Entity);
	$var($Integer, i, $cast($Integer, $nc(Entity::entityTypes)->get(nm)));
	return (i == nullptr) ? $DTDConstants::CDATA : i->intValue();
}

void Entity::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Entity::entityTypes, $new($Hashtable));
	{
		Entity::entityTypes->put("PUBLIC"_s, $($Integer::valueOf($DTDConstants::PUBLIC)));
		Entity::entityTypes->put("CDATA"_s, $($Integer::valueOf($DTDConstants::CDATA)));
		Entity::entityTypes->put("SDATA"_s, $($Integer::valueOf($DTDConstants::SDATA)));
		Entity::entityTypes->put("PI"_s, $($Integer::valueOf($DTDConstants::PI)));
		Entity::entityTypes->put("STARTTAG"_s, $($Integer::valueOf($DTDConstants::STARTTAG)));
		Entity::entityTypes->put("ENDTAG"_s, $($Integer::valueOf($DTDConstants::ENDTAG)));
		Entity::entityTypes->put("MS"_s, $($Integer::valueOf($DTDConstants::MS)));
		Entity::entityTypes->put("MD"_s, $($Integer::valueOf($DTDConstants::MD)));
		Entity::entityTypes->put("SYSTEM"_s, $($Integer::valueOf($DTDConstants::SYSTEM)));
	}
}

Entity::Entity() {
}

$Class* Entity::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Entity, name)},
		{"type", "I", nullptr, $PUBLIC, $field(Entity, type)},
		{"data", "[C", nullptr, $PUBLIC, $field(Entity, data)},
		{"entityTypes", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Integer;>;", $STATIC, $staticField(Entity, entityTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I[C)V", nullptr, $PUBLIC, $method(Entity, init$, void, $String*, int32_t, $chars*)},
		{"getData", "()[C", nullptr, $PUBLIC, $method(Entity, getData, $chars*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Entity, getName, $String*)},
		{"getString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(Entity, getString, $String*)},
		{"getType", "()I", nullptr, $PUBLIC, $method(Entity, getType, int32_t)},
		{"isGeneral", "()Z", nullptr, $PUBLIC, $method(Entity, isGeneral, bool)},
		{"isParameter", "()Z", nullptr, $PUBLIC, $method(Entity, isParameter, bool)},
		{"name2type", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Entity, name2type, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.swing.text.html.parser.Entity",
		"java.lang.Object",
		"javax.swing.text.html.parser.DTDConstants",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Entity, name, initialize, &classInfo$$, Entity::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Entity);
	});
	return class$;
}

$Class* Entity::class$ = nullptr;

				} // parser
			} // html
		} // text
	} // swing
} // javax
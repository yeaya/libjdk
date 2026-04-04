#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {

$shorts* JPEGHuffmanTable::StdDCLuminanceLengths = nullptr;
$shorts* JPEGHuffmanTable::StdDCLuminanceValues = nullptr;
$shorts* JPEGHuffmanTable::StdDCChrominanceLengths = nullptr;
$shorts* JPEGHuffmanTable::StdDCChrominanceValues = nullptr;
$shorts* JPEGHuffmanTable::StdACLuminanceLengths = nullptr;
$shorts* JPEGHuffmanTable::StdACLuminanceValues = nullptr;
$shorts* JPEGHuffmanTable::StdACChrominanceLengths = nullptr;
$shorts* JPEGHuffmanTable::StdACChrominanceValues = nullptr;
JPEGHuffmanTable* JPEGHuffmanTable::StdDCLuminance = nullptr;
JPEGHuffmanTable* JPEGHuffmanTable::StdDCChrominance = nullptr;
JPEGHuffmanTable* JPEGHuffmanTable::StdACLuminance = nullptr;
JPEGHuffmanTable* JPEGHuffmanTable::StdACChrominance = nullptr;

void JPEGHuffmanTable::init$($shorts* lengths, $shorts* values) {
	$useLocalObjectStack();
	if (lengths == nullptr || values == nullptr || lengths->length == 0 || values->length == 0 || lengths->length > 16 || values->length > 256) {
		$throwNew($IllegalArgumentException, "Illegal lengths or values"_s);
	}
	for (int32_t i = 0; i < $nc(lengths)->length; ++i) {
		if (lengths->get(i) < 0) {
			$throwNew($IllegalArgumentException, $$str({"lengths["_s, $$str(i), "] < 0"_s}));
		}
	}
	for (int32_t i = 0; i < $nc(values)->length; ++i) {
		if (values->get(i) < 0) {
			$throwNew($IllegalArgumentException, $$str({"values["_s, $$str(i), "] < 0"_s}));
		}
	}
	$set(this, lengths, $Arrays::copyOf(lengths, lengths->length));
	$set(this, values, $Arrays::copyOf(values, values->length));
	validate();
}

void JPEGHuffmanTable::validate() {
	int32_t sumOfLengths = 0;
	for (int32_t i = 0; i < $nc(this->lengths)->length; ++i) {
		sumOfLengths += this->lengths->get(i);
	}
	if (sumOfLengths != $nc(this->values)->length) {
		$throwNew($IllegalArgumentException, "lengths do not correspond to length of value table"_s);
	}
}

void JPEGHuffmanTable::init$($shorts* lengths, $shorts* values, bool copy) {
	if (copy) {
		$set(this, lengths, $Arrays::copyOf(lengths, $nc(lengths)->length));
		$set(this, values, $Arrays::copyOf(values, $nc(values)->length));
	} else {
		$set(this, lengths, lengths);
		$set(this, values, values);
	}
}

$shorts* JPEGHuffmanTable::getLengths() {
	return $Arrays::copyOf(this->lengths, $nc(this->lengths)->length);
}

$shorts* JPEGHuffmanTable::getValues() {
	return $Arrays::copyOf(this->values, $nc(this->values)->length);
}

$String* JPEGHuffmanTable::toString() {
	$useLocalObjectStack();
	$var($String, ls, $System::getProperty("line.separator"_s, "\n"_s));
	$var($StringBuilder, sb, $new($StringBuilder, "JPEGHuffmanTable"_s));
	sb->append(ls)->append("lengths:"_s);
	for (int32_t i = 0; i < $nc(this->lengths)->length; ++i) {
		sb->append(" "_s)->append((int32_t)this->lengths->get(i));
	}
	sb->append(ls)->append("values:"_s);
	for (int32_t i = 0; i < $nc(this->values)->length; ++i) {
		sb->append(" "_s)->append((int32_t)this->values->get(i));
	}
	return sb->toString();
}

void JPEGHuffmanTable::clinit$($Class* clazz) {
	$assignStatic(JPEGHuffmanTable::StdDCLuminanceLengths, $new($shorts, {
		0,
		1,
		5,
		1,
		1,
		1,
		1,
		1,
		1,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	}));
	$assignStatic(JPEGHuffmanTable::StdDCLuminanceValues, $new($shorts, {
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10,
		11
	}));
	$assignStatic(JPEGHuffmanTable::StdDCChrominanceLengths, $new($shorts, {
		0,
		3,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		0,
		0,
		0,
		0,
		0
	}));
	$assignStatic(JPEGHuffmanTable::StdDCChrominanceValues, $new($shorts, {
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10,
		11
	}));
	$assignStatic(JPEGHuffmanTable::StdACLuminanceLengths, $new($shorts, {
		0,
		2,
		1,
		3,
		3,
		2,
		4,
		3,
		5,
		5,
		4,
		4,
		0,
		0,
		1,
		125
	}));
	$assignStatic(JPEGHuffmanTable::StdACLuminanceValues, $new($shorts, {
		1,
		2,
		3,
		0,
		4,
		17,
		5,
		18,
		33,
		49,
		65,
		6,
		19,
		81,
		97,
		7,
		34,
		113,
		20,
		50,
		129,
		145,
		161,
		8,
		35,
		66,
		177,
		193,
		21,
		82,
		209,
		240,
		36,
		51,
		98,
		114,
		130,
		9,
		10,
		22,
		23,
		24,
		25,
		26,
		37,
		38,
		39,
		40,
		41,
		42,
		52,
		53,
		54,
		55,
		56,
		57,
		58,
		67,
		68,
		69,
		70,
		71,
		72,
		73,
		74,
		83,
		84,
		85,
		86,
		87,
		88,
		89,
		90,
		99,
		100,
		101,
		102,
		103,
		104,
		105,
		106,
		115,
		116,
		117,
		118,
		119,
		120,
		121,
		122,
		131,
		132,
		133,
		134,
		135,
		136,
		137,
		138,
		146,
		147,
		148,
		149,
		150,
		151,
		152,
		153,
		154,
		162,
		163,
		164,
		165,
		166,
		167,
		168,
		169,
		170,
		178,
		179,
		180,
		181,
		182,
		183,
		184,
		185,
		186,
		194,
		195,
		196,
		197,
		198,
		199,
		200,
		201,
		202,
		210,
		211,
		212,
		213,
		214,
		215,
		216,
		217,
		218,
		225,
		226,
		227,
		228,
		229,
		230,
		231,
		232,
		233,
		234,
		241,
		242,
		243,
		244,
		245,
		246,
		247,
		248,
		249,
		250
	}));
	$assignStatic(JPEGHuffmanTable::StdACChrominanceLengths, $new($shorts, {
		0,
		2,
		1,
		2,
		4,
		4,
		3,
		4,
		7,
		5,
		4,
		4,
		0,
		1,
		2,
		119
	}));
	$assignStatic(JPEGHuffmanTable::StdACChrominanceValues, $new($shorts, {
		0,
		1,
		2,
		3,
		17,
		4,
		5,
		33,
		49,
		6,
		18,
		65,
		81,
		7,
		97,
		113,
		19,
		34,
		50,
		129,
		8,
		20,
		66,
		145,
		161,
		177,
		193,
		9,
		35,
		51,
		82,
		240,
		21,
		98,
		114,
		209,
		10,
		22,
		36,
		52,
		225,
		37,
		241,
		23,
		24,
		25,
		26,
		38,
		39,
		40,
		41,
		42,
		53,
		54,
		55,
		56,
		57,
		58,
		67,
		68,
		69,
		70,
		71,
		72,
		73,
		74,
		83,
		84,
		85,
		86,
		87,
		88,
		89,
		90,
		99,
		100,
		101,
		102,
		103,
		104,
		105,
		106,
		115,
		116,
		117,
		118,
		119,
		120,
		121,
		122,
		130,
		131,
		132,
		133,
		134,
		135,
		136,
		137,
		138,
		146,
		147,
		148,
		149,
		150,
		151,
		152,
		153,
		154,
		162,
		163,
		164,
		165,
		166,
		167,
		168,
		169,
		170,
		178,
		179,
		180,
		181,
		182,
		183,
		184,
		185,
		186,
		194,
		195,
		196,
		197,
		198,
		199,
		200,
		201,
		202,
		210,
		211,
		212,
		213,
		214,
		215,
		216,
		217,
		218,
		226,
		227,
		228,
		229,
		230,
		231,
		232,
		233,
		234,
		242,
		243,
		244,
		245,
		246,
		247,
		248,
		249,
		250
	}));
	$assignStatic(JPEGHuffmanTable::StdDCLuminance, $new(JPEGHuffmanTable, JPEGHuffmanTable::StdDCLuminanceLengths, JPEGHuffmanTable::StdDCLuminanceValues, false));
	$assignStatic(JPEGHuffmanTable::StdDCChrominance, $new(JPEGHuffmanTable, JPEGHuffmanTable::StdDCChrominanceLengths, JPEGHuffmanTable::StdDCChrominanceValues, false));
	$assignStatic(JPEGHuffmanTable::StdACLuminance, $new(JPEGHuffmanTable, JPEGHuffmanTable::StdACLuminanceLengths, JPEGHuffmanTable::StdACLuminanceValues, false));
	$assignStatic(JPEGHuffmanTable::StdACChrominance, $new(JPEGHuffmanTable, JPEGHuffmanTable::StdACChrominanceLengths, JPEGHuffmanTable::StdACChrominanceValues, false));
}

JPEGHuffmanTable::JPEGHuffmanTable() {
}

$Class* JPEGHuffmanTable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"StdDCLuminanceLengths", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCLuminanceLengths)},
		{"StdDCLuminanceValues", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCLuminanceValues)},
		{"StdDCChrominanceLengths", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCChrominanceLengths)},
		{"StdDCChrominanceValues", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCChrominanceValues)},
		{"StdACLuminanceLengths", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACLuminanceLengths)},
		{"StdACLuminanceValues", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACLuminanceValues)},
		{"StdACChrominanceLengths", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACChrominanceLengths)},
		{"StdACChrominanceValues", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACChrominanceValues)},
		{"StdDCLuminance", "Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCLuminance)},
		{"StdDCChrominance", "Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCChrominance)},
		{"StdACLuminance", "Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACLuminance)},
		{"StdACChrominance", "Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACChrominance)},
		{"lengths", "[S", nullptr, $PRIVATE, $field(JPEGHuffmanTable, lengths)},
		{"values", "[S", nullptr, $PRIVATE, $field(JPEGHuffmanTable, values)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([S[S)V", nullptr, $PUBLIC, $method(JPEGHuffmanTable, init$, void, $shorts*, $shorts*)},
		{"<init>", "([S[SZ)V", nullptr, $PRIVATE, $method(JPEGHuffmanTable, init$, void, $shorts*, $shorts*, bool)},
		{"getLengths", "()[S", nullptr, $PUBLIC, $virtualMethod(JPEGHuffmanTable, getLengths, $shorts*)},
		{"getValues", "()[S", nullptr, $PUBLIC, $virtualMethod(JPEGHuffmanTable, getValues, $shorts*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JPEGHuffmanTable, toString, $String*)},
		{"validate", "()V", nullptr, $PRIVATE, $method(JPEGHuffmanTable, validate, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.imageio.plugins.jpeg.JPEGHuffmanTable",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JPEGHuffmanTable, name, initialize, &classInfo$$, JPEGHuffmanTable::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGHuffmanTable);
	});
	return class$;
}

$Class* JPEGHuffmanTable::class$ = nullptr;

			} // jpeg
		} // plugins
	} // imageio
} // javax
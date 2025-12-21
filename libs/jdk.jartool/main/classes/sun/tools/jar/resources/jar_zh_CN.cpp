#include <sun/tools/jar/resources/jar_zh_CN.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace tools {
		namespace jar {
			namespace resources {

$MethodInfo _jar_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jar_zh_CN::*)()>(&jar_zh_CN::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _jar_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_zh_CN_MethodInfo_
};

$Object* allocate$jar_zh_CN($Class* clazz) {
	return $of($alloc(jar_zh_CN));
}

void jar_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"\'c\' 标记要求指定清单或输入文件!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"\'-d, --describe-module\' 选项不需要指定任何输入文件"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"不能同时指定 \'e\' 标记和具有 \'Main-Class\' 属性的\n清单!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of(u"解析文件参数时出错"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"必须指定 {ctxuid} 中的任一选项。"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"错误的原因: {0}, 必须为 deprecated, deprecated-for-removal 或 incubating 之一"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"\'u\' 标记要求指定清单, \'e\' 标记或输入文件!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"无法打开: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0}: 无法创建目录"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"无法创建临时文件"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"正在对模块 {0} 的被依赖对象执行散列处理, 在模块路径中找不到模块 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"非法选项: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"处理时遇到不正确的长度: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"无效的模块描述符属性 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"选项{0}需要参数"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"未找到服务提供方: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"找不到模块描述符"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of(u"--module-version 或 --hash-modules 之一没有 module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"不能指定多个 \'-cuxtid\' 选项"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"没有发行版的有效描述符: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"没有根模块描述符, 请指定 --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0}: 没有这个文件或目录"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"发行版 {1} 存在意外的版本化条目 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"发行版 {0} 无效"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"发行版 {0} 无效, 必须 >= 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"无法派生 {0} 的模块描述符"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"意外的模块描述符 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"无法识别的选项: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"条目名称格式错误, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"条目 {0} 包含的类具有与早期版本不同的 api"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"条目名称 {0} 太短, 不是目录"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"条目 {0} 包含与较早版本不兼容的类版本"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"版本化目录中的 module-info.class 包含不同的 \"exports\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: 版本化目录中的 module-info.class 包含不同的 \"main-class\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"版本化目录中的 module-info.class 包含不正确的名称"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"版本化目录中的 module-info.class 包含不同的 \"opens\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"版本化目录中的 module-info.class 包含不同的 \"provides\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"版本化目录中的 module-info.class 包含额外的 \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"版本化目录中的 module-info.class 包含缺少的 \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"版本化目录中的 module-info.class 包含额外的 \"requires transitive\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: 版本化目录中的 module-info.class 包含不同的 \"version\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"条目 {0} 是单独的嵌套类"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of(u"无法验证 {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"删除的多发行版 jar 文件 {0} 无效"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"条目 {0} 包含内部名称为 {1} 的类, 名称不匹配"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"条目 {0} 包含未在基础条目中找到的新公共类"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"条目名称 {0} 没有版本号"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"写入现有的 jar 文件时出错"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" 在任意模式下有效的操作修饰符:\n\n  -C DIR                     更改为指定的目录并包含\n                             以下文件"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            档案文件名。省略时, 基于操作\n                             使用 stdin 或 stdout\n      --release VERSION      将下面的所有文件都放在\n                             jar 的版本化目录中 (即 META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              在标准输出中生成详细输出"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" 仅在创建模式下有效的操作修饰符:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            创建后在新的 jar 档案中\n                             规范化信息。此选项已过时，\n                             计划在未来的 JDK 发行版中删除"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" 在创建和更新模式下有效的操作修饰符:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  从默认根模块集中排除"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN 计算和记录模块的散列, \n                             这些模块按指定模式匹配并直接或\n                             间接依赖于所创建的模块化 jar 或\n                             所更新的非模块化 jar"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" 只在创建, 更新和生成索引模式下有效的操作修饰符:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          仅存储; 不使用 ZIP 压缩"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME 捆绑到模块化或可执行 \n                             jar 档案的独立应用程序\n                             的应用程序入口点"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        包含指定清单文件中的\n                             清单信息"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          模块被依赖对象的位置, 用于生成\n                             散列"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    创建模块化 jar 或更新\n                             非模块化 jar 时的模块版本"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          不为条目创建清单文件"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     提示工具在解析模块后发出警告。\n                             可以为 deprecated, deprecated-for-removal\n                             或 incubating 之一"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" 主操作模式:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of(u"  -c, --create               创建档案"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      输出模块描述符或自动模块名称"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x, --extract              从档案中提取指定的 (或全部) 文件"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  为指定的 jar 档案生成\n                             索引信息"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 列出档案的目录"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of(u"  -u, --update               更新现有 jar 档案"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" 其他选项:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -?, -h, --help[:compat]    提供此帮助，也可以选择性地提供兼容性帮助"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           提供额外选项的帮助"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              输出程序版本"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" 如果模块描述符 \'module-info.class\' 位于指定目录的\n 根目录中, 或者位于 jar 档案本身的根目录中, 则\n 该档案是一个模块化 jar。以下操作只在创建模块化 jar,\n 或更新现有的非模块化 jar 时有效: \'--module-version\',\n \'--hash-modules\' 和 \'--module-path\'。\n\n 如果为长选项提供了必需参数或可选参数, 则它们对于\n 任何对应的短选项也是必需或可选的。"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"用法: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar 创建类和资源的档案, 并且可以处理档案中的\n单个类或资源或者从档案中还原单个类或资源。\n\n 示例:\n # 创建包含两个类文件的名为 classes.jar 的档案:\n jar --create --file classes.jar Foo.class Bar.class\n # 使用现有的清单创建档案, 其中包含 foo/ 中的所有文件:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # 创建模块化 jar 档案, 其中模块描述符位于\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # 将现有的非模块化 jar 更新为模块化 jar:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # 创建包含多个发行版的 jar, 并将一些文件放在 META-INF/versions/9 目录中:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\n要缩短或简化 jar 命令, 可以在单独的文本文件中指定参数,\n并使用 @ 符号作为前缀将此文件传递给 jar 命令。\n\n 示例:\n # 从文件 classes.list 读取附加选项和类文件列表\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of(u"用法: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"尝试使用 `jar --help\' 获取详细信息。"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of(u"已添加清单"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"已添加 module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of(u"正在添加: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"找不到模块描述符。已派生自动模块。"_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of(u"  已创建: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of(u"(压缩了 {0}%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of(u"已提取: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of(u"正在忽略条目{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u"  已解压: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u"(输入 = {0}) (输出 = {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of(u"(存储了 0%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of(u"已更新清单"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of(u"已更新 module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"兼容性接口：\n用法：jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...\n选项：\n    -c  创建新档案\n    -t  列出档案目录\n    -x  从档案中提取指定的（或所有）文件\n    -u  更新现有档案\n    -v  在标准输出中生成详细输出\n    -f  指定档案文件名\n    -m  包含指定清单文件中的清单信息\n    -e  为捆绑到可执行 jar 文件的独立应用程序\n        指定应用程序入口点\n    -0  仅存储；不使用任何 ZIP 压缩\n    -P  保留文件名中的前导 \'/\'（绝对路径）和 \"..\"（父目录）组成部分\n    -M  不创建条目的清单文件\n    -i  为指定的 jar 文件生成索引信息\n    -C  更改为指定的目录并包含以下文件\n如果任何文件为目录，则对其进行递归处理。\n清单文件名、档案文件名和入口点名称的指定顺序\n与 \'m\', \'f\' 和 \'e\' 标记的指定顺序相同。\n\n示例 1：将两个类文件归档到一个名为 classes.jar 的档案中：\n       jar cvf classes.jar Foo.class Bar.class \n示例 2：使用现有的清单文件 \'mymanifest\' 并\n           将 foo/ 目录中的所有文件归档到 \'classes.jar\' 中：\n       jar cvfm classes.jar mymanifest -C foo/。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.flag.is.deprecated"_s),
			$of(u"警告：{0} 选项已过时，计划在未来的 JDK 发行版中删除。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"意外的版本化条目 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"警告: 条目 {0} 是已隐藏程序包中的\n公共类, 将此 jar 放置在类路径中\n将导致公共接口不兼容"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"警告: 条目 {0} 包含与 jar 中的\n现有条目相同的类"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"警告: 条目 {0}, 多个资源具有相同名称"_s)
		})
	});
}

jar_zh_CN::jar_zh_CN() {
}

$Class* jar_zh_CN::load$($String* name, bool initialize) {
	$loadClass(jar_zh_CN, name, initialize, &_jar_zh_CN_ClassInfo_, allocate$jar_zh_CN);
	return class$;
}

$Class* jar_zh_CN::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun
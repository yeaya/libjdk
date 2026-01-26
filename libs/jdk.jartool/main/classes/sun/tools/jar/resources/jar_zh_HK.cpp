#include <sun/tools/jar/resources/jar_zh_HK.h>

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

$MethodInfo _jar_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(jar_zh_HK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(jar_zh_HK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _jar_zh_HK_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_zh_HK",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_zh_HK_MethodInfo_
};

$Object* allocate$jar_zh_HK($Class* clazz) {
	return $of($alloc(jar_zh_HK));
}

void jar_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_zh_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"\'c\' 旗標要求指定資訊清單或輸入檔案！"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"\'-d, --describe-module\' 選項不需要指定輸入檔"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"無法同時指定 \'e\' 旗標和具有 \'Main-Class\' 屬性的\n資訊清單！"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of(u"剖析檔案引數時發生錯誤"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"必須指定 -{ctxuid} 的其中一個選項。"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"錯誤原因: {0}，必須是 deprecated、deprecated-for-removal 或 incubating 其中之一"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"\'u\' 旗標要求指定資訊清單、\'e\' 旗標或輸入檔案！"_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"無法開啟: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0} : 無法建立目錄"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"無法建立暫存檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"雜湊模組 {0} 相依性，在模組路徑上找不到模組 {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"無效的選項: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"處理 {0} 時長度不正確"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"模組描述區屬性 {0} 無效"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"選項 {0} 需要一個引數"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"找不到服務提供者: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"找不到模組描述區"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of(u"--module-version 或 --hash-modules 其中一個沒有 module-info.class"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"您不能指定多個 \'-cuxtid\' 選項"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"沒有以下版本的操作描述區: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"沒有根模組描述區，請指定 --release"_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0} : 沒有這類檔案或目錄"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"版本 {1} 有未預期的啟動多版本功能項目 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"版本 {0} 無效"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"版本 {0} 無效，必須大於等於 9"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"無法衍生 {0} 的模組描述區"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"未預期的模組描述區 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"無法辨識的選項 : {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"項目名稱 {0} 的格式錯誤"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"項目 {0} 的某個類別含有與較舊版本不同的 API"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"項目名稱 {0} 太短，無法作為目錄"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"項目 {0} 的類別版本與較舊版本不相容"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"已啟動多版本功能目錄中的 module-info.class 包含不同的 \"exports\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: 已啟動多版本功能目錄中的 module-info.class 包含不同的 \"main-class\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"已啟動多版本功能目錄中的 module-info.class 包含不正確的名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"已啟動多版本功能目錄中的 module-info.class 包含不同的 \"opens\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"已啟動多版本功能目錄中的 module-info.class 包含不同的 \"provides\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"已啟動多版本功能目錄中的 module-info.class 包含額外的 \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"已啟動多版本功能目錄中的 module-info.class 包含遺漏的 \"requires\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"已啟動多版本功能目錄中的 module-info.class 包含額外的 \"requires transitive\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: 已啟動多版本功能目錄中的 module-info.class 包含不同的 \"version\""_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"項目 {0} 是已隔離的巢狀結構類別"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of(u"無法驗證 {0}: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"已刪除無效的多重版本 jar 檔案 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"項目 {0} 含有內部名稱為 {1} 的類別，名稱不相符"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"項目 {0} 含有在基準項目中找不到的新公用類別"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"項目名稱 {0} 沒有版本編號"_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"寫入現有的 jar 檔案時發生錯誤"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" 可在任何模式下使用的作業修飾條件:\n\n  -C DIR                     變更為指定目錄並包含\n                             下列檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            存檔檔案名稱。如果省略，會根據作業使用\n                             stdin 或 stdout\n      --release VERSION      將所有下列檔案放置在 jar 的啟動多版本\n                             功能目錄中 (例如 META-INF/versions/VERSION/)"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              在標準輸出中產生詳細輸出"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" 只能在建立模式使用的作業修飾條件:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            建立新的 jar 存檔之後，將其中的資訊\n                             標準化"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" 只能在建立和更新模式下使用的作業修飾條件:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  不包括預設的模組設定根目錄"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN 運算及記錄與指定樣式\n                             相符的模組雜湊，這直接或間接地\n                             相依於正在建立的模組化 jar 或正在\n                             更新的非模組化 jar"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" 只能在建立、更新及產生索引模式下使用的作業修飾條件:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          僅儲存; 不使用 ZIP 壓縮方式"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME 隨附於模組化或可執行\n                             jar 存檔中獨立應用程式的\n                             應用程式進入點"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        包含指定資訊清單檔案中的資訊清單\n                             資訊"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          模組相依性的位置，用於產生\n                             雜湊"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    建立模組化 jar 或更新非模組化 jar 時\n                             使用的模組版本"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          不為項目建立資訊清單檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     若模組已解析，則提示工具以發出警告。\n                             deprecated、deprecated-for-removal 或 incubating \n                             其中之一"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" 主要作業模式:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of(u"  -c, --create               建立存檔"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      列印模組描述區或自動產生的模組名稱"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x, --extract              從存檔中擷取指定 (或所有) 檔案"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  為指定的 jar 存檔產生索引\n                             資訊"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 列出存檔的目錄"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of(u"  -u, --update               更新現有的 jar 存檔"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" 其他選項:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -h, --help[:compat]        提供此說明或選擇性顯示相容性說明"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           提供額外選項的說明"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              列印程式版本"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" 如果模組描述區 (\'module-info.class\') 位於指定目錄的根\n 或 jar 存檔本身的根，則存檔會是\n 模組化的 jar。下列作業只能在建立模組化 jar 或更新\n 現有非模組化 jar 時進行: \'--module-version\'、\n \'--hash-modules\' 和 \'--module-path\'。\n\n 長選項的強制性或選擇性引數也會是任何對應短選項的\n 強制性或選擇性引數。"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"用法: jar [OPTION...] [ [--release VERSION] [-C dir] files] ...\njar 會建立一個類別和資源的存檔，而且可操控或\n從存檔回復個別類別或資源。\n\n 範例:\n # 建立一個名為 classes.jar 的存檔，其中含有兩個類別檔案:\n jar --create --file classes.jar Foo.class Bar.class\n # 使用現有的資訊清單加上 foo/ 中的所有檔案建立一個存檔:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # 建立一個模組化 jar 存檔，其中的模組描述區位於\n # classes/module-info.class:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # 將現有的非模組化 jar 更新成模組化 jar:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # 建立多重版本的 jar，將部分檔案放置在 META-INF/versions/9 目錄中:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\n若要縮短或簡化 jar 命令，可以在個別文字檔中指定引數，\n然後使用 at 符號 (@) 作為前置碼，將其傳送至 jar 命令。\n\n 範例:\n # 從 classes.list 檔案讀取額外的選項和類別檔案清單\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of(u"用法: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"請使用 \'jar --help\' 以取得更多的資訊。"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of(u"已新增資訊清單"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"已新增 module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of(u"新增: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"找不到模組描述區。已自動衍生模組。"_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of(u"  建立: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of(u"(壓縮 {0}%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of(u"擷取: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of(u"忽略項目 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u" 擴展: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u" (讀={0})(寫={1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of(u"(儲存 0%)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of(u"已更新資訊清單"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of(u"已更新 module-info: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"相容性介面:\n用法: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files] ...\n選項:\n    -c  建立新存檔\n    -t  列出存檔的目錄\n    -x  從存檔中擷取指定 (或全部) 的檔案\n    -u  更新現有存檔\n    -v  在標準輸出中產生詳細輸出\n    -f  指定存檔檔案名稱\n    -m  包含指定之資訊清單檔案中的資訊清單資訊\n    -n  在建立新存檔之後執行 Pack200 正規化\n    -e  為隨附於可執行 jar 檔案中的獨立應用程式 \n        指定應用程式進入點\n    -0  僅儲存; 不使用 ZIP 壓縮方式\n    -P  保留檔案名稱前面的 \'/\' (絕對路徑) 和 \"..\" (上層目錄) 元件\n    -M  不為項目建立資訊清單檔案\n    -i  為指定的 jar 檔案產生索引資訊\n    -C  變更至指定的目錄並包含後面所列的檔案\n如果有任何檔案是目錄，則會對其進行遞迴處理。\n資訊清單檔案名稱、存檔檔案名稱以及進入點名稱\n的指定順序與指定 \'m\'、\'f\' 以及 \'e\' 旗標的順序相同。\n\n範例 1: 將兩個類別檔案存檔至名為 classes.jar 的存檔中: \n       jar cvf classes.jar Foo.class Bar.class \n範例 2: 使用現有的資訊清單檔案 \'mymanifest\' 並將\n           foo/ 目錄中的所有檔案存檔至 \'classes.jar\': \n       jar cvfm classes.jar mymanifest -C foo/。\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"未預期的啟動多版本功能項目 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"警告: 項目 {0} 是隱藏套裝程式中的\n公用類別，若將此 jar 放在類別路徑上\n會造成公用介面不相容"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"警告: 項目 {0} 的某個類別\n與 jar 中的現有項目相同"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"警告: 項目 {0} 中的多個資源名稱相同"_s)
		})
	});
}

jar_zh_HK::jar_zh_HK() {
}

$Class* jar_zh_HK::load$($String* name, bool initialize) {
	$loadClass(jar_zh_HK, name, initialize, &_jar_zh_HK_ClassInfo_, allocate$jar_zh_HK);
	return class$;
}

$Class* jar_zh_HK::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun
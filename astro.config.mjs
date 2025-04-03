// @ts-check
import { defineConfig } from "astro/config";
import starlight from "@astrojs/starlight";
	
// https://astro.build/config
export default defineConfig({
	site: "https://renegadebananas.github.io",
	base: "/rbstat-doc/",
	integrations: [
		starlight({
			title: "My Docs",
			customCss:[
				// Path to your custom CSS file
				'/src/styles/custom.css',
			],
			social: {
				github: "https://github.com/withastro/starlight",
			},
			sidebar: [
				{
					label: "Get started",
					items: [
						// Each item here is one entry in the navigation menu.
						{
							label: "Plugin installation",
							slug: "get-started"
						},
						{
							label: "Create your stat component",
							slug: "create-component"
						},
						{
							label: "Hide undesired stat names",
							slug: "hide-stats"
						},
						{
							label: "Modify experience formula",
							slug: "override-experience-formula"
						}
					],
				},
				{
					label: "Classes",
					items: [
						// Each item here is one entry in the navigation menu.
						{
							label: "UStatComponent",
							slug: "classes/ustatcomponent"
						},
						{
							label: "UStatBase",
							slug: "classes/ustatbase"
						},
						{
							label: "URangeValueStat",
							slug: "classes/urangevaluestat"
						},
						{
							label: "URegenStat",
							slug: "classes/uregenstat"
						},
						{
							label: "UExperienceStat",
							slug: "classes/uexperiencestat"
						},
						{
							label: "UStatBonus",
							slug: "classes/ustatbonus"
						},
					],
				},
				{
					label: "Structs",
					items: [
						// Each item here is one entry in the navigation menu.
						{
							label: "FStatBaseInit",
							slug: "structs/fstatbaseinit"
						},
						{
							label: "FRangeValueInit",
							slug: "structs/frangevalueinit"
						},
						{
							label: "FRegenInit",
							slug: "structs/fregeninit"
						},
						{
							label: "FExperienceInit",
							slug: "structs/fexperienceinit"
						},
						{
							label: "FStatModifier",
							slug: "structs/fstatmodifier"
						}
					],
				},
			],
		}),
	],
});

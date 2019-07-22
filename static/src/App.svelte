<script>
    import { Router, Link, Route } from "svelte-routing";
    import Index from "./routes/index.svelte";
    import About from "./routes/about.svelte";
    import Contact from "./routes/contact.svelte";
    import Header from "./components/header.svelte"
    export let url = "";
</script>

<Router url="{url}">
    <Header />
    <div>
        <Route path="/" component="{Index}" />
        <Route path="/about" component="{About}" />
        <Route path="/contact" component="{Contact}" />
    </div>
</Router>
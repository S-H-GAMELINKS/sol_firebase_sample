<script>
    import { Router, Link, Route } from "svelte-routing";
    import { Index, About, Contact } from "./routes";

    export let url = "";
</script>

<Router url="{url}">
    <Link to="/">Home</Link>
    <Link to="/about">About</Link>
    <Link to="/contact">Contact</Link>
    <div>
        <Route path="/" component="{Index}" />
        <Route path="/about" component="{About}" />
        <Route path="/contact" component="{Contact}" />
    </div>
</Router>